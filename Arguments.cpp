#include<iostream>
using namespace std;
int product(int x, int y);
int main()
{
	cout<<product(20,55)<<endl;
	cout<<product(8, 9)<<endl;
	cout<<product(12, 14)<<endl;
	return 0;
}

int product(int x, int y)
{
	return (x*y);
}
