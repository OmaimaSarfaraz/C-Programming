#include<iostream>
using namespace std;
int main()
{
    cout<<"Array 1"<<endl;
	int arr1[4]={5,6,7,8};
	for(int i=0;i<4;i++)
	{cout<<arr1[i]<<" ";
		}	
	cout<<endl<<"Array 2"<<endl;
	int arr2[4]={1,2,3,4};
		for(int i=0;i<4;i++)
		{
		cout<<arr2[i]<<" ";
		}
		cout<<endl<<"Add = ";
	for(int i=0;i<4;i++)
	{
	cout<<arr1[i]+arr2[i]<<" ";
		}	
	cout<<endl<<"Substract = ";
	for(int i=0;i<4;i++)
	{
	cout<<arr1[i]-arr2[i]<<" ";
		}		
}
