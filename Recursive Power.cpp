#include<iostream>
using namespace std;
int cal(int a, int b)
{
	if(a==1 || b==0)
	{
		return 1;
	}
	return a*cal(a,b-1);
}
int main() 
{
    int base,power; 
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Power: ";
    cin>>power;
    cout<<"Result of ("<<base<<")^"<<power<<" is: "<<cal(base,power)<<endl; 
    return 0;
}
