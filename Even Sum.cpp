#include <iostream>
using namespace std;
int main()
{
	int arr[10],sum=0,odd;
	cout<<"Enter 10 values ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
    for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		sum+=arr[i];	
	} 
	cout<<"The sum of even is "<<sum<<endl;
}
