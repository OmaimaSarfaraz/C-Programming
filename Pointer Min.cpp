#include<iostream>
using namespace std;
int main()
{
	int arr[5],*p,min;
	p=arr;
	cout<<"Enter 5 elements: ";
	for(int i=0;i<=4;i++)
	{
		cin>>*(p+i);
	}
	min=arr[0];
	for(int i=0;i<=4;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"Minimum: "<<min;
	return 0;
}
