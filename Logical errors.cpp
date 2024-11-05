//LOGICAL ERROR
#include<iostream>
using namespace std;
int main()
{   
    int a=45,b=35,c;
    //we want addition but by mistake we use "-" operator so output is unwanted.  
    cout<<"By adding "<<a<<" and "<<b<<" the result is "<<a-b;
	return 0;
}

