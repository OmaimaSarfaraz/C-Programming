#include<iostream>
using namespace std;
int fact();
int main()
{
    int f;
	f=fact();	
	cout<<f;
	return 0;
}

int fact()
{
	int num,fact=1;
    cout<<"Enter a positive integer to find its factorial: ";
    cin>>num;
    if(num<0)
    { cout<<"Factorial is not defined.";
	}
	else
	{
       for (int i=1;i<=num;++i) 
	    {
           fact*=i;
          }	
	}
	return fact;
}
