#include<iostream>
using namespace std;
void sum(int x, int y);
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"After Addition: "<<endl;
	sum(a,b);
	return 0;
}

void sum(int x, int y)
{
	cout<<x+y<<endl;
}
