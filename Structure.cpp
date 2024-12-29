#include<iostream>
#include<string>
using namespace std;
struct students{
	int age;
	string name;
	double marks;
}S1,S2;
int main()
{
	cout<<"**Student no 1**\n";
	cout<<"What is your name? \nEnter: ";
	cin>>S1.name;
	cout<<"What is your age? \nEnter: ";
	cin>>S1.age;
	cout<<"Enter your marks: ";
	cin>>S1.marks;
	cout<<"**Student no 2**\n";
	cout<<"What is your name? \nEnter: ";
	cin>>S2.name;
	cout<<"What is your age? \nEnter: ";
	cin>>S2.age;
	cout<<"Enter your marks: ";
	cin>>S2.marks;
	cout<<"Student 1: "<<S1.name<<"\nMarks: "<<S1.marks;
	cout<<"\nStudent 2: "<<S2.name<<"\nMarks: "<<S2.marks;
	return 0;
}
