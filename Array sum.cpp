#include <iostream>
using namespace std;
int main()
{   
	int arr[5],sum;
	cout<<"Enter 5 values :";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
		cout<<"Sum of all numbers is: "<<sum;
	return 0;
}
