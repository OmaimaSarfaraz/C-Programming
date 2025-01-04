#include <iostream>
using namespace std;
int main() 
{  //for upper half
    int n=5; 
    for(int i=5;i>=1;i--)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" "; // Print spaces
            }
        for(int j=1;j<=(2*i-1);j++)
		 {
            cout<<"*"; // Print *
            }
        cout<<endl; // Move to the next row
    } 
    //lower half
    for(int i=2;i<=n;i++)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" ";
            }
        for(int j=1;j<=(2*i-1);j++)
		 {
            cout<<"*";
            }
        cout<<endl; // Move to the next row
    }
    return 0;
}
