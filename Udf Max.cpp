#include<iostream>
using namespace std;
int findMax(int arr[]);
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
	{
	   cout<<"Enter number "<<i+1<<" : ";
       cin>>arr[i]; }
       cout<<"Maximum is: "<<findMax(arr);
    return 0;
}
int findMax(int arr[])
{
    int max=arr[0];
    for(int i=1;i<5;i++)
      {  if(arr[i]>max)
            max=arr[i];
			}
    return max;
}
