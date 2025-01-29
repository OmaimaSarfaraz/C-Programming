#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    int rows=5;  
    // Loop to print each row
    for (int i=0; i<rows; ++i) 
	{
        cout<<setw(rows-i);  
        // Loop to print the values in row
        int val=1;  
        for (int j=0;j<=i; ++j)
		 {
            cout<<val<<" ";  // Print the value
            if (j<i) {
                val=val*(i - j)/(j + 1);
            }
        }
        cout<<endl;   // Move to the next line
    }
    return 0;
}

