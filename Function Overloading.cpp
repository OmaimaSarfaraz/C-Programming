#include<iostream>
using namespace std;
int sum(int, int);
int sum(int, int, int);
int sum(int, double);
int main()
{
	cout<<sum(5,10)<<endl;
	cout<<sum(4,8.995)<<endl;
	cout<<sum(19,20,21);
	return 0;
}

int sum(int a, int b)
{
	return a+b;
}

int sum(int x, int y, int z)
{
	return x+y+z;
}

int sum(int g, double h)
{
	return g+h;
}
