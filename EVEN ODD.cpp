#include<iostream>
using namespace std;
int main()
{
int num,even=0,odd=0;
cout<<"Enter a number: ";
cin>>num;
while(num!=0)
{
cout<<"Enter a number: ";
cin>>num;
if(num%2==0)
{ even++;}
else
{ odd++;}
cout<<"EVEN NUMBERS COUTING IS: "<<even<<endl;
cout<<"ODD NUMBERS COUTING IS: "<<odd<<endl;
}
return 0;
}
