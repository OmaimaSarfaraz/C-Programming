#include <iostream>
using namespace std;
int main()
{   
	int arr[5];
	cout<<"Enter 5 values :";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<". "<<arr[i]<<endl;
	}
	return 0;
}
