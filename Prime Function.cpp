#include<iostream>
using namespace std;
bool prime(int);
int main()
{
	int a;
	cout<<"Enter Number To Check It Is Prime Or Not: ";
	cin>>a;
	if(prime(a))
	  cout<<a<<" is a prime number."<<endl;
	else
	  cout<<a<<" is not a prime number."<<endl;
	return 0;
}

bool prime(int x)
{
	if(x<=1) 
        return false; 
    for (int i=2;i*i<=x;i++)
	{
        if (x%i==0)
            return false; 
    }
    return true;
}
