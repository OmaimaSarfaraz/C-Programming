#include <iostream>
using namespace std;
int main() 
{
    int n=5; //length of pyramid
    for(int i=1;i<=n;i++)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" "; // Print spaces
            }
        for(int j=1;j<=i;j++)
		 {
            cout<<j;}
        for(int j=i-1;j>=1;j--)
		 {
            cout<<j; //print numbers
            }
        cout<<endl; // Move to the next row
    }
    return 0;
}
