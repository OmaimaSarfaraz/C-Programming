#include <iostream> 
#include <math.h>
using namespace std;
int main()
{
	int num,power;
	long double result;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Enter a power of a number: ";
	cin>>power;
	result=pow(num,power);
	cout<<"The result of ("<<num<<")^"<<power<<" is: "<<result;
	return 0;
}
