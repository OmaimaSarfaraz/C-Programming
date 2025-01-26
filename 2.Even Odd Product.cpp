#include<iostream>
using namespace std;
int main()
{  
   int n,n1;
   long long product=1;
   cout<<"Enter Starting Number: ";
   cin>>n;
   cout<<"Enter Ending Number: ";
   cin>>n1; 
   cout<<"Even Numbers Between "<<n<<" and "<<n1<<" are: ";
   for(int i=n;i<=n1;i++)
   {
   	    if(i%2==0)
   	    { cout<<i<<" ";
		   }
   }
   cout<<endl;
   for(int i=n;i<=n1;i++)
   {
   	    if(i%2!=0)
		{
			cout<<i<<" * ";
			product*=i;
		}
	}
   cout<<"\b\b = "<<product;
   return 0;
}
