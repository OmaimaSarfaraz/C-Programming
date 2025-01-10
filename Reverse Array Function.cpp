#include<iostream>
using namespace std;
void reverse(int []);
int main()
{
	int arr[10]={3,7,8,55,44,32,100,70,51,11};
	cout<<"Original Array: "<<endl;
	for(int i=0;i<=9;i++)
	{
		cout<<arr[i]<<" ";
	}
	reverse(arr);
	return 0;
}
void reverse(int a[10])
{
	cout<<"\nReversed Array: "<<endl;
	for(int i=9;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}	
}
