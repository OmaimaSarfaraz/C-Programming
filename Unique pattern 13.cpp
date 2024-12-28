#include <iostream>
using namespace std;
int main() 
{
    int n=5;  // Height of the triangle
    for (int i=1;i<=n;i++)
	 {
        for (int j=1;j<=(2*i-1); j++) 
		{
            if (j==1 || j==2*i-1 || i==n) 
			{
                cout << "*";   // Print *
            } else {
                cout << " ";  // Print space
            }
        }
        cout << endl; // Move to the next row
    }
    return 0;
}
