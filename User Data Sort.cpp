#include<iostream>
using namespace std;
int main()
{
	int arr[5],u,i,temp;
	cout<<"Enter Elements To Sort: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
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
	cout<<"After Sorting In Ascending: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	} 
	cout<<"\nAfter Sorting In Descending: "<<endl;
	for(i=4;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}     
    return 0;
}

