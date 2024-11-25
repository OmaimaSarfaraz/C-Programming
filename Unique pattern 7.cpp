#include <iostream>
using namespace std;
int main() 
{
    for(int i=1;i<=5;i++)  // Loop for rows
	 {
        for(int j=1;j<=5;j++)  // Loop for coloums
		 {  cout<<"*";  // Print '*' 
            }
        cout<<endl; // Move to the next row
    }
    return 0;
}
