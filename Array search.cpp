#include <iostream>
using namespace std;
int main()
{   
	int arr[5],n;
	cout<<"Enter 5 values :";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Which index number you want: ";
	cin>>n;
	for(int j=0;j<=n;j++)
	{ 
	  if(j==n)
	  {
		cout<<"Your number at index "<<n<<" is "<<arr[n]<<endl;
		}
	}
	return 0;
}
