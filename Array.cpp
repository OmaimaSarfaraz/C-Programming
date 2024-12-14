#include <iostream>
using namespace std;
int main()
{
	int arr[10]={2,3,4,5,6,8,7,9,6,4},sum=0;
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum = "<< sum;
	return 0;
}
