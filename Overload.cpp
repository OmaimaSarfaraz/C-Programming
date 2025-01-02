#include<iostream>
using namespace std;
void sum(int x, int y)
{
	cout<<x+y<<endl;
}
void sum(double x, int y)
{
	cout<<x+y<<endl;
}

int main()
{
	sum(5,7);
	sum(19.9,22);
	return 0;
}


