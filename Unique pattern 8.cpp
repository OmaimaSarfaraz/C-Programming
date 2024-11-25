#include <iostream>
using namespace std;
int main() 
{
    int n=5;  // Size of square
    for (int i=1;i<=n;i++)  // Loop for rows
	{
        for (int j=1;j<=n;j++)  // Loop for coloums
		{
            if (i==1 || i==n || j==1 || j==n) 
			{
                cout<<"*"; //If conditions true Print '*' 
            } else 
			{
                cout<<" ";  //If conditions false Print spaces
            }
        }
        cout<<endl;  // Move to the next row
    }
    return 0;
}

