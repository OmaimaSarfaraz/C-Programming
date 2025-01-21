#include<iostream>
using namespace std;
int main()
{
	int arr[5]={34,45,63,78,21},*p,sum=0;
	p=arr;
	for(int i=4;i>=0;i--)
	{
		cout<<*(p+i)<<endl;
		cout<<p<<endl;
		cout<<&arr[i]<<endl;
		sum+=*(p+i);
	}
	cout<<"Average is: "<<sum/5.0;
	return 0;
}
