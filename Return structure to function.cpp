#include<iostream>
using namespace std;
struct student print(void);

struct student{
	int id;
	char name[30];
	double percent;
};

int main()
{
	student s=print();
	cout<<"\nStudent Information:"<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"ID: "<<s.id<<endl;
	cout<<"Percentage: "<<s.percent<<endl;	
	return 0;
}

struct student print(void)
{
	student st;
	cout<<"Enter Name: ";
	gets(st.name);
	cout<<"Enter ID: ";
	cin>>st.id;
	cout<<"Enter Percentage: ";
	cin>>st.percent;
	return st;
}
