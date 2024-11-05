#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num==0)
    { cout<<"Number is zero.";
	}	
	else
	{  cout<<(num>0?"Number is positive.":"Number is negative.");
	}
	return 0;
}

