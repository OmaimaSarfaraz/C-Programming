#include<iostream>
using namespace std;
int fact(void);
void table(void);
int no;
int main()
{
	cout<<"Enter number: "<<endl;
	cin>>no;
	cout<<"Factorial is: "<<fact()<<endl;
	cout<<"Table is: "<<endl;
	table();
	return 0;
}

int fact()
{
	int fact=1;
	for(int i=no;i>=1;i--)
	{ fact*=i;
	}
	return fact;
}
void table()
{
	for(int i=1;i<=10;i++)
	{ cout<<no<<" * "<<i<<" = "<<i*no<<endl;
	}
}
