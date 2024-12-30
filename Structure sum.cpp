#include<iostream>
using namespace std;
struct add{
	int marks[5];
	char name[20];
};
int main()
{
    add a1={{50,49,45,39,47},"Ali"};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=a1.marks[i];
	}
	cout<<"Name: "<<a1.name<<endl;
	cout<<"Total marks: "<<sum;
	return 0;
}
