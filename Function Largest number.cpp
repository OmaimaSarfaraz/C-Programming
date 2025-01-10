#include<iostream>
using namespace std;
int large(int, int, int);
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers: ";
	cin>>a>>b>>c;
	cout<<"Largest number is: "<<large(a,b,c);
	return 0;
}

int large(int x, int y, int z)
{
	int no;
	if(x>=y && x>=z)
	{
		return x;
	}
	else if(y>=x && y>=z)
	{
		return y;
	}
	else if(z>=x && z>=y)
	{
		return z;
	}
}
