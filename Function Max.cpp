#include<iostream>
using namespace std;
int func(int arr[5])
{
    int var=arr[0];
	for(int i=0;i<5;i++)
	{
		if(var<arr[i])
		var=arr[i];
	}
	
 return (var);
}
int main()
{
	int arr[5];
	cout<<"Enter 5 values ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nYour values are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"\nMaximum value is ";
	cout<<func(arr);

}
