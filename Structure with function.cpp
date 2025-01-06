#include<iostream>
using namespace std;
void print(struct student);

struct student{
	int id;
	char name[30];
	double percent;
};

int main()
{
	student s;
	cout<<"Enter Name: ";
	gets(s.name);
	cout<<"Enter ID: ";
	cin>>s.id;
	cout<<"Enter Percentage: ";
	cin>>s.percent;
	print(s);
	return 0;
}
void print(struct student st)
{
	cout<<"\nStudent Information:"<<endl;
	cout<<"Name: "<<st.name<<endl;
	cout<<"ID: "<<st.id<<endl;
	cout<<"Percentage: "<<st.percent<<endl;	
}
