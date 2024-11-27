#include <iostream>
using namespace std;
int main() 
{  
    int n=5;  // Size of the plus sign
    for (int i=0;i<n;i++) 
	{
        for (int j=0;j<n;j++) 
		{   // Print '*' for the middle row and middle column
		 if (i==n/2||j==n/2) 
		 {   cout << "* "; 
            } 
		 else
		 {  cout <<"  ";   // Print space
		    }
        
    }  cout<<endl; // Move to the next row
  }	
  return 0;
}


