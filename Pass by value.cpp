#include<iostream>
using namespace std;
void sum(int x, int y);
int main()
{
	sum(5,7);
	sum(19,22);
	sum(50,67);
	return 0;
}

void sum(int x, int y)
{
	cout<<x+y<<endl;
}
