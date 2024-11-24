#include <iostream>
using namespace std;
int main() 
{   //Upper half of the diamond
    int n=5; // Number of rows of the diamond
    for(int i=1;i<=n;i++)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" ";  // Print spaces
            }
        for(int j=1;j<=(2*i-1);j++)
		 {
            cout<<"*";  // Print stars
            }
        cout<<endl; // Move to the next row
    } 
  {
    //lower half of the diamond
    for(int i=4;i>=1;i--)
	 {
        for(int j=1;j<=n-i;j++)
		 {  cout<<" ";  // Print spaces
            }
        for(int j=1;j<=(2*i-1);j++)
		 {
            cout<<"*"; // Print stars
            }
        cout<<endl;  // Move to the next row
    }
    return 0;
  }
    return 0;
}
