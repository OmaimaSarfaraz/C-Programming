#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	float marks;
};

void displayStudent( Student s)
{
	cout<<"Name: "<<s.name<<endl;
	cout<<"Age: "<<s.age<<endl;
    cout<<"Marks: "<<s.marks<<endl;
	}
	
int main()
{
	Student s;
	cout<<"Enter name: ";
	getline(cin,s.name);
	cout<<"Enter age: ";
	cin>>s.age;
	cout<<"Enter marks: ";
	cin>>s.marks;
	displayStudent(s);
	return 0;
}


