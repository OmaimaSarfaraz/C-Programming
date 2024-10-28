//Task 3:Demonstrate type conversion.
#include<iostream>
using namespace std;
int main()
{
    float f_1;        // Declaring float
    int num1;         // Declaring integer
    char char2 = 'D';   // Declaring character
    int numberToAdd = 10;   //Declaring Integer to add to the ASCII value of the character
    
	// Converting float to integer and display after conversion
    cout<<"Enter a float value: ";
    cin>>f_1;
    num1=f_1;\
    cout<<"After converting float value "<<f_1<<" to integer the value is "<<num1<<endl;
    
    // Display the original character and its ASCII value
    cout << "Original character: " << char2 << endl;
    cout << "ASCII value of '" << char2 << " : " << static_cast<int>(char2) << endl;

    // Add the integer to the character's ASCII value
    char newChar = char2 + numberToAdd;

    // Display the new character and its ASCII value
    cout << "New character after adding " << numberToAdd << ": " << newChar << endl;
    cout << "ASCII value of '" << newChar << "': " << static_cast<int>(newChar) << endl;
    
    return 0;
}
