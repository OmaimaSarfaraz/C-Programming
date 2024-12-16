#include <iostream>
using namespace std;
int main()
{   
	int arr[3][3]={1,2,3,4,44,55,66,77,88};
	for(int i=0;i<3;i++)
	{   for(int j=0;j<3;j++)
		  {cout<<arr[i][j]<<endl;}
	}
	/*cout<<"Enter values :";
	for(int i=0;i<5;i++)
	{   for(int j=0;j<5;j++)
		  {cin>>arr[i][j];}
	}
	for(int i=0;i<5;i++)
	{   for(int j=0;j<5;j++)
		  {cout<<arr[i][j];}
	}*/
	return 0;
}
