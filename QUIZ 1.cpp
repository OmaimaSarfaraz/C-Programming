#include<iostream>
using namespace std;
int main()
{  
   int arr[5]={1,3,5,7,9};
   for(int i=0;i<5;i++)
   { 
     cout<<arr[i];
     arr[i+1]=arr[i]+arr[i+1];
     cout<<endl;
   }
   
   return 0;
}
