#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Input the number of elements to be stored in the array : ";
	cin>>n;
	int arr[n],arr2[n];
	cout<<"Input "<<n<<" elements in the array: ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Element - "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"The elements stored in the first array are: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		arr2[i]=arr[i];	
	}
	cout<<"\nThe elements copied into the second array are: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
		if(arr2[i]%2==0)
		{sum+=arr[i];
		}
	}
	cout<<"\nSum = "<<sum;
	return 0;
	
}
