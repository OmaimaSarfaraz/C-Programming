#include <iostream>
using namespace std;
int main() 
{
    int n=5; 
    for(int i=5;i>=1;i--)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" ";
            }
        for(int j=1;j<=i;j++)
		 {
            cout<<j;}
        for(int j=i-1;j>=1;j--)
		 {
            cout<<j;
            }
        cout<<endl;
    }
    return 0;
}