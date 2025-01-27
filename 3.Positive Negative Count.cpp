#include<iostream>
using namespace std;
int main()
{  
   int n,pos=0,neg=0;
   do
   {
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0)
    {
    	pos++;
	}
	else if(n<0)
	{
		neg++;
	}
   }while(n!=0);
   cout<<"Positive Numbers Are: "<<pos<<endl;
   cout<<"Negative Numbers Are: "<<neg<<endl;
   return 0;
}
