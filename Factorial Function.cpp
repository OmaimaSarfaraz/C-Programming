#include<iostream>
using namespace std;
int fact;
void factorial(int);
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	factorial(n);
	cout<<"Factorial of "<<n<<" is: "<<fact;
}

void factorial(int a)
{
	fact=1;
	for(int i=a;i>=1;i--)
	{
	   fact*=i;
	}
}
