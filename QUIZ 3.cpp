#include<iostream>
using namespace std;
int main()
{  
   int i=5;
   while(i>=1)
   {
   	 int j=1;
     while(j<=i)
     {
   	    cout<<i;
   	    j++;
      }
   	i--;
   	cout<<endl;
   }
   return 0;
}