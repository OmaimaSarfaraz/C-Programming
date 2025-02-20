#include<iostream>
using namespace std;
int main()
{
    int rows=4,cols=5; // Number of rows and columns
    int num=1; // Start number
    for (int i=0; i<rows; i++)
    {   
	    if (i%2==0)
	    {
            // Forward direction for even rows
            for (int j=0; j<cols; j++)
			{
                cout<<num<<" ";
                num++;
            }
        }
		else 
        {   // Reverse direction for odd rows
            int end=num+cols-1; // Calculate the last number 
            for (int j=0; j<cols; j++) 
            {    
			    cout<<end-j<<" ";
                num++;
            }
        }
        cout<<endl; // Move to the next row
    }
    return 0;
}
