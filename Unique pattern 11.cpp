#include <iostream>
using namespace std;
int main() 
{  
    int n=9;  // Height of the X pattern
    for (int i=1;i<=n;i++) 
	{
        for (int j=1;j<=n;j++) 
		{  
		 if (i == j ||j == n-i+1) 
		 {   cout << "*"; // Print * if conditions true
            } 
		 else
		 {  cout << " ";   // Print spaces if conditions false
		    }
        
    }  cout<<endl;}
	return 0;
}


