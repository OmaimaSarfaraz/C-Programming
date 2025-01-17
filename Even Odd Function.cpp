#include<iostream>
using namespace std;
int checkEvenOdd(int n)
{
	if(n%2==0)
	    return 1;
	else
	    return 0;
}
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	if (checkEvenOdd(num))
	    cout<<num<<" is even. "<<endl;
	else
	 cout<<num<<" is odd. "<<endl;
	return 0;
}
