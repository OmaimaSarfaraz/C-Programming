#include<iostream>
using namespace std;
int main()
{  
   int n,sum=0,ans=1;
   cout<<"Input the value for the nth term: ";
   cin>>n;
   int i=1;
   while(i<=n)
   {
   	ans=i*i;
   	cout<<i<<" * "<<i<<" = "<<ans<<endl;
    i++;
    sum+=ans;
   }
   cout<<"The sum of the above series is: "<<sum;
   return 0;
}
