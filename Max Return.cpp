#include<iostream>
using namespace std;

struct student{
    char name[30]; 
    int id;       
    int marks[5]; 
};

void min(struct student);
int add(int);

int main()
{
	struct student s1;
    cout<<"Name: ";
    gets(s1.name);
    cout<<"ID: ";
    cin>>s1.name;
    cout<<"Enter Marks of 5 subjects: ";
    for(int i=0; i<=4; i++)
    {
    	cin>>s1.marks[i];
	}
	min(s1);
    return 0; 
}

void min(struct student a)
{
    int min;
	min=a.marks[0];
    for(int i=1; i<=4; i++)
    {
    	if(min>a.marks[i])
        {min=a.marks[i];
		}
	}
	int max=add(min);
	int sum=max+min;
	cout<<"Sum of Maximum And Minimum: "<<sum<<endl;
}

int add(int m)
{
	struct student s2;
	cout<<"Name: ";
    cin>>s2.name;
    cout<<"ID: ";
    cin>>s2.name;
    cout<<"Enter Marks of 5 subjects: ";
    for(int i=0; i<=4; i++)
    {
    	cin>>s2.marks[i];
	}
    int max=s2.marks[0];
    for(int i=1; i<=4; i++) 
	{
        if(max<s2.marks[i])
        {max=s2.marks[i];
		}
    } 
    return max;
}

