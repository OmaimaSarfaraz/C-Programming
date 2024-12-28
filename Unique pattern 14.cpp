#include <iostream>
using namespace std;
int main() 
{  
    int n=5; 
    for (int i=1;i<=n;i++) 
	{
        for (int j=1;j<=n;j++) 
		{  
		 if (i==j || j==n-i+1) 
		 {   cout << "*"; // Print *
            } 
		 else
		 {  cout << " ";  // Print space
		    }
        
    }  cout<<endl;}// Move to the next row
	return 0;
}


