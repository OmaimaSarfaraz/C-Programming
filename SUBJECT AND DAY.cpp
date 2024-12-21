/*Write a program using nested `switch` statements to print the schedule for a high school 
student based on the grade (9th, 10th, 11th) and day of the week (Monday to Friday)*/
#include<iostream>
using namespace std;
int main()
{  
    int grade, dayOfWeek;
    cout << "Enter grade (9, 10, or 11): ";
    cin >> grade;
    cout << "Enter day of the week (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
    cin >> dayOfWeek;
    switch(grade) 
	{
        case 9:
            switch(dayOfWeek) {
              case 1: 
				cout << "Monday: Math" << endl; 
				break;
              case 2: 
			    cout << "Tuesday: English" << endl; 
				break;
              case 3: 
			    cout << "Wednesday: History" << endl; 
				break;
              case 4: 
			    cout << "Thursday: Science" << endl; 
				break;
              case 5: 
			    cout << "Friday: Physics" << endl; 
			    break;
              default: 
			    cout << "Invalid day of the week!" << endl; 
				break;
            }
            break;
        case 10:
            switch(dayOfWeek) {
              case 1: 
				cout << "Monday: English" << endl; 
				break;
              case 2: 
				cout << "Tuesday: Math" << endl; 
				break;
              case 3: 
				cout << "Wednesday: Computer Science" << endl; 
				break;
              case 4: 
				cout << "Thursday: Chemistry" << endl; 
				break;
              case 5: 
				cout << "Friday: Art" << endl; 
				break;
              default: 
				cout << "Invalid day of the week!" << endl; 
				break;
            }
            break;
        case 11:
            switch(dayOfWeek) {
              case 1: 
				cout << "Monday: History" << endl; 
				break;
              case 2: 
				cout << "Tuesday: Physics" << endl; 
				break;
              case 3: 
				cout << "Wednesday: Math" << endl; 
				break;
              case 4: 
				cout << "Thursday: Literature" << endl; 
				break;
              case 5: 
				cout << "Friday: Computer Science" << endl; 
				break;
              default: 
				cout << "Invalid day of the week!" << endl; 
				break;
            }
            break;
        default:
            cout << "Invalid grade!" << endl;
            break;
    }
   return 0;
}
