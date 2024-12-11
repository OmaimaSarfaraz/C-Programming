#include <iostream>
using namespace std;
int main()
{   
	int arr[5],min;
	cout<<"Enter 5 values :";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	for(int i=1;i<=5;i++)
	{
		if(min>arr[i])
		{ min=arr[i];
		}
	}
		cout<<"Minimum is: "<<min;
	return 0;
}
