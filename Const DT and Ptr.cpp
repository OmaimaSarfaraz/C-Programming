#include<iostream>
using namespace std;
int main()
{
	int x=100;
    const int* const ptr=&x;
	cout<<*ptr<<endl;
	return 0;
}
