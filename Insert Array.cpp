#include<iostream>
using namespace std;
int main()
{
	int arr[5],*p=arr,insert,pos;
	cout<<"Enter 5 integers: ";
	for(int i=0;i<5;i++)
	{
	    cin>>*(p+i);
		}
	cout<<"Enter an integer to insert: ";
	cin>>insert;
	cout<<"Enter position (1-5): ";
	cin>>pos;
	pos--;
	for(int i=4;i>pos;i--)
	{
	    *(p+i)=*(p+i-1);
	}
	*(p+pos)=insert;
	cout<<"Array after insertion: ";
	for(int i=0;i<5;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
	}


