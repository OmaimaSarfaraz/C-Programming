#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,65,-23,1,15}; 
	int u,i,temp;
	cout<<"Before Sorting: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(u=4;u>=1;u--)
	{
	    for(i=0;i<u;i++)
	    {
		    if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			 } 
	    }	
	}
	cout<<"\nAfter Sorting In Ascending: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}   
    return 0;
}

