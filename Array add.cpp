#include<iostream>
using namespace std;
int main()
{
	int arr[7],arr1[7],i,j;
	for(i=0;i<=6;i++)
	{
		cout<<"Enter number "<<i+1<<endl;
		cin>>arr[i];
	}
	for(j=0;j<=6;j++)
	{
		cout<<"Enter number "<<j+1<<endl;
		cin>>arr[j];
	}
	for(i=0;i<=6;i++)
	{
		int sum=arr[i]+arr1[j];
		cout<<sum<<endl;
		j--;
	}
	return 0;
}
