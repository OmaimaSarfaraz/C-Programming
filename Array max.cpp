#include <iostream>
using namespace std;
int main()
{   
	int arr[5],max;
	cout<<"Enter 5 values :";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=1;i<=5;i++)
	{
		if(max<arr[i])
		{ max=arr[i];
		}
	}
		cout<<"Maximum is: "<<max;
	return 0;
}
