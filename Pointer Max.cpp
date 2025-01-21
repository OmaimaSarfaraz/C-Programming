#include<iostream>
using namespace std;
int main()
{
	int arr[5],*p,max;
	p=arr;
	cout<<"Enter 5 elements: ";
	for(int i=0;i<=4;i++)
	{
		cin>>*(p+i);
	}
	max=arr[0];
	for(int i=0;i<=4;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<"Maximum: "<<max;
	return 0;
}
