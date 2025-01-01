#include<iostream>
using namespace std;
void add(int a, int b)
{
	cout<<a+b<<endl;
}
void add(int x, int y, int z)
{
	cout<<x+y+z<<endl;
}

int main()
{
	add(5,10);
	add(10,20,35);
	return 0;
}

