#include<iostream>
using namespace std;
int stat(int);
int main()
{
	for(int i=1;i<=3;i++)
	{ cout<<stat(i)<<endl;
	}
	return 0;
}

int stat(int a)
{
	int d=10;
	static int c=10;
	c*=a;
	c++;
	d*=a;
	d++;
	cout<<d<<endl;
	return c;
}

