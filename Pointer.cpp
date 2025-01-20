#include<iostream>
using namespace std;
int main()
{
	int a,*p;
	printf("%u\n",&a);
	printf("%u\n",p);
	p=&a;
	cout<<&a<<endl<<p;
	cout<<"\nEnter: ";
	cin>>a;
	cout<<*p;
	return 0;
}
