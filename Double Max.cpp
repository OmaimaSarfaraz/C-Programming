#include <iostream>
using namespace std;
int main()
{   
	int arr[3][5],max;
	for(int i=0;i<3;i++)
	{ for(int j=0;j<5;j++)
	  {
	    cout<<"Enter values for position "<<i+1<<","<<j+1<<" : ";
		cin>>arr[i][j]; }
	}
	
	max=arr[0][0];
	for(int i=0;i<3;i++)
	{
	  for(int j=0;j<5;j++)
	  {
		if(max<arr[i][j])
		{ max=arr[i][j];
		}
		        }
	}
		cout<<"Maximum is: "<<max;
	return 0;
}

