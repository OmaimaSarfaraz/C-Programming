#include <iostream>
using namespace std;
int main()
{   
	int arr[10],n;
	cout<<"Enter 10 values :";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Which number you want: ";
	cin>>n;
	for(int j=0;j<=10;j++)
	{ 
	  if(arr[j]==n)
	  {
		cout<<"Your number "<<n<<" is at index "<<j<<endl;
	}
	}
	return 0;
}
