//Write a c++ program for a simple Student Management System to handle basic student information.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct student{
    string name;  // Student's name
    int id;       // Unique ID for the student
    string depart; // Department of the student
}st;

vector<student> students; // Vector to store multiple student records

// Function prototypes
void addStudent();
void displayStudent();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    char ch;
    int choice;
    cout << "Welcome to Student Management System!";
    do {
        // Menu for selecting an operation
        cout<<"\nWhat do you want to do? \n1.Add Student \n2.Display Students \n3.Search Student \n4.Update Student \n5.Delete Student \nEnter Your Choice: ";
        cin>>choice;
        //Execute given case of the choice
        switch(choice)
        {
            case 1:
                addStudent();  //Function Calling to Add student details
                break;
            case 2:
                displayStudent();  //Function Calling to Display all students
                break;
            case 3:
                searchStudent();  //Function Calling to Search for a student by ID
                break;
            case 4:
                updateStudent();  //Function Calling to Update student details
                break;
            case 5:
                deleteStudent();  //Function Calling to Delete a student
                break;
            default:
                cout << "Invalid choice.\n";  // For Invalid input 
        }    

        //Ask to continue or exit
        cout<<"\nDo you want to continue? \nEnter y or n: ";
        cin>>ch;
    } while(ch=='y' || ch=='Y');  // Loop continues if user enters 'y' or 'Y'

    return 0;  // End of program
}

//Function Definitions
void addStudent()
{
    char choice;
    do {
        // Asking for the student's name, ID, and department
        cout<< "Enter Name: ";
        cin.ignore();  // Ignore the leftover newline from previous input
        getline(cin, st.name);  // Read full name including spaces
        
        cout<< "Enter ID: "; 
        cin>> st.id;  // Read student ID
        cout<< "Enter Department: ";
        cin>> st.depart;  // Read department

        students.push_back(st);  // Add student to the vector
        cout<< "\nStudent Added.\n";

        // Ask if user wants to add more students
        cout<< "Want to add more? \nEnter y or n: ";
        cin>> choice;
    } while(choice == 'y' || choice == 'Y');  // Repeat if user enters 'y' or 'Y'
}

void displayStudent()
{
    // Loop through all students in the vector and print their details
    for(int i=0; i<students.size(); i++) 
	{
        cout<< "\nName: " << students[i].name;
        cout<< "\nID: " << students[i].id;
        cout<< "\nDept: " << students[i].depart << '\n';
    } 
    
    if(students.empty())  // If no students are in the list
        cout<< "No students.\n";  // Print this message
}

void searchStudent()
{
    int id; 
    cout<< "Enter ID To Search Student: "; 
    cin>> id;  // Ask user to enter the ID they want to search for
    
    // Search for the student with the matching ID
    for(int i=0; i<students.size(); i++)
	{
        if(students[i].id == id)
		{  // Check if current student has matching ID
            cout<< "\nID: " << students[i].id;
            cout<< "\nName: " << students[i].name;
            cout<< "\nDept: " << students[i].depart << '\n'; 
            return;  // Exit after displaying the student
        }
    }
    cout << "Not found.\n";  // If student with given ID is not found
}

void updateStudent()
{
    int id; 
    cout<<"\nEnter ID To Update Student Information: "; 
    cin>>id;  // Ask user to enter the ID they want to update
    
    // Loop through students to find the one with the matching ID
    for(int i=0; i<students.size(); i++)
	{
        if(students[i].id==id) 
		{  // If student with matching ID is found
            cout<<"Enter New Name: "; 
            cin.ignore();  // Clear the input buffer before using getline() again
            getline(cin, students[i].name);  // Get the new full name

            cout<<"Enter New Department: ";
            cin>>students[i].depart;  // Get the new department

            cout<<"Updated.\n";  // Confirm the update
            return;  // Exit the function after updating the student
        }
    }
    cout<<"Not found.\n";  // If no student with the given ID is found
}

void deleteStudent() 
{
    int id;
    cout<<"Enter ID To Delete Student Information: "; 
    cin>>id;  // Prompt user to enter the ID of the student they want to delete
    
    // Loop through students to find the one with the matching ID
    for(int i=0; i<students.size(); ++i) 
	{
        if(students[i].id==id) 
		{  // If student with matching ID is found
            students.erase(students.begin() + i);  // Remove the student from the vector
            cout<<"Deleted.\n";  // Confirm deletion
            return;
        }
    }
    cout << "Not found.\n";  // If no student with the given ID is found
}
