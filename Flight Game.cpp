#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Function to display hangman
void displayHangman(int attempts) {
    const char* hangman[] = {
        "  +---+\n      |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n  |   |\n      |\n     ===",
        "  +---+\n  O   |\n /|   |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n /    |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n / \\  |\n     ==="
    };

    cout << hangman[attempts] << endl;
}

// Hangman game function
void hangmanGame() {
    const char* words[] = {"airplane", "travel", "reservation", "hangman", "system"};
    const int wordCount = sizeof(words) / sizeof(words[0]);

    srand(time(0));
    const char* word = words[rand() % wordCount];
    int wordLength = strlen(word);

    char guessedWord[wordLength + 1];
    for (int i = 0; i < wordLength; i++) guessedWord[i] = '_';
    guessedWord[wordLength] = '\0';

    char usedLetters[26] = ""; // To track used letters
    int attempts = 0;
    const int maxAttempts = 6;

    cout << "\n--- Hangman Game! ---\n";

    while (attempts < maxAttempts && strcmp(guessedWord, word) != 0) {
        displayHangman(attempts);
        cout << "Word: " << guessedWord << "\nUsed Letters: " << usedLetters << "\n";

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        // Check if the letter is already used
        if (strchr(usedLetters, guess)) {
            cout << "You already guessed that letter!\n";
            continue;
        }

        // Add the letter to usedLetters
        int len = strlen(usedLetters);
        usedLetters[len] = guess;
        usedLetters[len + 1] = '\0';

        // Check if the guess is correct
        bool correctGuess = false;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            cout << "Wrong guess!\n";
            attempts++;
        }
    }

    displayHangman(attempts);

    if (strcmp(guessedWord, word) == 0) {
        cout << "Congratulations! You guessed the word: " << word << "\n";
    } else {
        cout << "Game over! The word was: " << word << "\n";
    }
}

// Flight reservation system function
void flightReservation() {
    cout << "\n--- Flight Reservation System ---\n";
    cout << "1. Book a flight\n";
    cout << "2. View available flights\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nProcessing your booking...\n";
            cout << "Error! System has stopped responding...\n";
            cout << "Restarting...\n";
            hangmanGame();
            break;
        case 2:
            cout << "\nAvailable flights:\n";
            cout << "1. Flight A - $200\n2. Flight B - $300\n3. Flight C - $400\n";
            break;
        case 3:
            cout << "Exiting the system. Goodbye!\n";
            break;
        default:
            cout << "Invalid option! Try again.\n";
    }
}

int main() {
    char again;
    do {
        flightReservation();
        cout << "Do you want to continue (y/n)? ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using the Flight Reservation System!\n";
    return 0;
}


