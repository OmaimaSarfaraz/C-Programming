#include<iostream>
using namespace std;
int main()
{
	int arr1[4]={1,2,3,4},arr2[4]={5,6,7,8};
	cout<<"Array 1"<<endl;
	for(int i=0;i<4;i++)
	{
	   cout<<arr1[i]<<" ";
		}	
	cout<<endl<<"Array 2"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<arr2[i]<<" ";
		}
	cout<<endl<<"After Addition\n";
	for(int i=0;i<4;i++)
	{
	    cout<<arr1[i]+arr2[i]<<" ";
		}	
	cout<<endl<<"After Substraction\n";
	for(int i=0;i<4;i++)
	{
	    cout<<arr2[i]-arr1[i]<<" ";
		}		
}
