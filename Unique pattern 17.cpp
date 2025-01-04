#include <iostream>
using namespace std;
int main() 
{
    int n=5;  //for height
    for (int i=1;i<=n;i++)
	 {
        for (int j=1;j<=n-i;j++) 
		{
            cout<<" "; // Print spaces
        }
        for (int j=1;j<=(2*i-1); j++) 
		{
            if (j==1 || j==2*i-1 || i==n) 
			{
                cout << "*"; // Print *
            } else {
                cout << " "; // Print spaces
            }
        }
        cout << endl; // Move to the next row
    }
    return 0;
}
