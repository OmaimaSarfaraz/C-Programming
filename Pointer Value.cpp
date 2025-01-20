#include <iostream>
using namespace std;
int main()
{
	int num=10;
	int *ptr=&num;
	cout<<"Value: "<<num<<endl;
	cout<<"Address: "<<&num<<endl;
	cout<<"Value of ptr (Address): "<<ptr<<endl;
	cout<<"Value at the address stored in ptr: "<<*ptr<<endl;
	*ptr=20;
	cout<<"Updated value using pointer: "<<num<<endl;
	return 0;
}


