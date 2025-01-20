#include<iostream>
using namespace std;
int main()
{
	int n=10,n1=55,*x,*y;
	cout<<"Before swapping: "<<n<<" "<<n1;
	x=&n;
	y=&n1;
    int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"\nAfter swapping: "<<*x<<" "<<*y;
	return 0;
}
