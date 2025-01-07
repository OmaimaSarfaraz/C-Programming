#include<iostream>
using namespace std;
void print(void);

struct student{
	int id;
	char name[30];
	double percent;
}s;

int main()
{
    print();
	cout<<"\nStudent Information:"<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"ID: "<<s.id<<endl;
	cout<<"Percentage: "<<s.percent<<endl;	
	return 0;
}

void print(void)
{
	cout<<"Enter Name: ";
	gets(s.name);
	cout<<"Enter ID: ";
	cin>>s.id;
	cout<<"Enter Percentage: ";
	cin>>s.percent;
}
