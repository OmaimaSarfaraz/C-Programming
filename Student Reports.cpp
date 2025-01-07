//Write a c++ program to manage student reports using functions and structures.
#include<iostream>
using namespace std;

struct student{
    char name[30];  // Student's name
    int rollno;       // Roll no for the student
    double marks[3]; // Marks array of the student
}st;


// Function declaration
void addStudent();
void displayStudent();
double calculateMarks();

int main()
{
    cout<<"Adding a Student"<<endl;
    addStudent();
    cout<<"Displaying a Student \nStudent Details: "<<endl;
    displayStudent();
    return 0; 
}

//Function Definitions
void addStudent()
{
    // Asking for the student's name, Roll no and Marks
    cout<<"Enter Name: ";
    gets(st.name);
    cout<<"Enter Roll No: "; 
    cin>>st.rollno;  
    cout<<"Enter Marks of three subjects: ";
    for(int i=0; i<=2; i++)
    {
        cin>>st.marks[i];
	}
    cout<<"\nStudent Added.\n"<<endl;
}

void displayStudent()
{
    cout<<"Name: "<<st.name<<endl;
    cout<<"Roll No: "<<st.rollno<<endl; 
    cout<<"Marks: ";
    for(int i=0; i<=2; i++) 
	{
       cout<<st.marks[i]<<" ";
    } 
    cout<<"\nTotal Marks: "<<calculateMarks();
}

double calculateMarks()
{
	double t_marks=0.0;
	for(int i=0; i<=2; i++) 
	{
       t_marks+=st.marks[i];
    } 
	return t_marks;
}
