#include<iostream>
using namespace std;
int main()
{
	int arr[6],max,min,even=0,odd=0;
	cout<<"Enter 6 integers:"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			max=min=arr[i];
		}
		if(arr[i]>max)
		{
		    max=arr[i];
			}
		if(arr[i]<min)
		{
		    min=arr[i];
			}
		if(arr[i]%2==0)
		{even++;}
		else
		{odd++;}
		}
	cout<<"Maximum value: "<<max<<endl;
	cout<<"Minimum value: "<<min<<endl;
	cout<<"Even count: "<<even<<endl;
	cout<<"Odd count: "<<odd<<endl;
	return 0;
}
