#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Employee{
	string name;
	int age;
	float salary;
};

void addData(ofstream &outFile)
{
	Employee emp;
	cout<<"Enter employee name: ";
	cin>>emp.name;
	cout<<"Enter employee age: ";
	cin>>emp.age;
	cout<<"Enter employee salary: ";
	cin>>emp.salary;
	outFile<<"Name: "<<emp.name<<endl;
	outFile<<"Age: "<<emp.age<<endl;
	outFile<<"Salary: "<<emp.salary<<endl;
}

int main()
{
	ofstream outFile("Employee_data.txt",ios::app);
	if(!outFile)
	{
		cout<<"Error opening file for writing!"<<endl;
		return 1;
	}
	char choice;
	do
	{
		addData(outFile);
		cout<<"Do you want to add another employee? (y/n): ";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	outFile.close();
	cout<<"Employee data saved to 'Employee_data.txt'."<<endl;
	return 0;
}


	


