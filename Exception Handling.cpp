#include<iostream>
using namespace std;
int main()
{
	int n,n1,sum=0;
	try
	{
		cout<<"Enter First Number: ";
		if(!(cin>>n))
		{
			throw "Not Integer!";
		}
		cout<<"Enter Second Number: ";
		if(!(cin>>n1))
		{
			throw "Not Integer!";
		}
		sum=n+n1;
		cout<<"The sum of "<<n<<" and "<<n1<<" is: "<<sum<<endl;
	}
	catch(const char* a)
	{
		cout<<"Exception: "<<a<<endl;
	}
	return 0;
}
