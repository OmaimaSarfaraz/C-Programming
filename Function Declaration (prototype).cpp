#include<iostream>
using namespace std;
void sum(int x, int y);
void sub(int a, int b);

int main()
{
	sub(10,6);
	sum(5,6);
	return 0;
}

void sum(int x, int y)
{
	cout<<x+y<<endl;
}
void sub(int a, int b)
{
	cout<<a-b<<endl;
}
