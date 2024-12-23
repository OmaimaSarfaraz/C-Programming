#include<iostream>
using namespace std;
int add(int num1,int num2)
{
	int sum=(num1*5)+(num2*5);
	return (sum);
}
int func(int m)
{
	return ( m*10);
}

int main()
{
	int n1,n2,var;
	cout<<"Enter two numbers ";
	cin>>n1>>n2;
	var=add(n1,n2);
	cout<<func(var);
}

