#include<iostream>
using namespace std;
int findMin(int arr[]);
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
	{
	   cout<<"Enter number "<<i+1<<" : ";
       cin>>arr[i]; }
       cout<<"Minimum is: "<<findMin(arr);
    return 0;
}
int findMin(int arr[])
{
    int min=arr[0];
    for(int i=1;i<5;i++)
      {  if(arr[i]<min)
            min=arr[i];
			}
    return min;
}
