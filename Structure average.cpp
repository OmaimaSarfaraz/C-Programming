#include<iostream>
using namespace std;
struct xyz{
	int marks[5];
	char name[20];
};
int main()
{
	xyz a1={{50,49,50,48,47},"Ali"};
	float avg;
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=a1.marks[i];
	}
	avg=sum/5.0;
	cout<<"Name: "<<a1.name<<endl;
	cout<<"Average: "<<avg;
	return 0;
}
