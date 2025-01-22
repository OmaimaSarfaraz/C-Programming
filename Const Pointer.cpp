#include<iostream>
using namespace std;
int main()
{
	const int* ptr;
	int x=10,y=20;
	ptr=&x;
	cout<<*ptr<<endl;
	ptr=&y;
	cout<<*ptr<<endl;
	return 0;
}
