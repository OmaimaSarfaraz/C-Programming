#include <iostream>
using namespace std;
int main() 
{
	int n;
    cout<<"Input Number Of Rows: ";
    cin>>n;
	int i=n;
    do
	{
	    int j=i;
        do
		{   cout<<j;
		    j--; 
        }
		while(j>=1);
		cout<<endl; 
		i--;
       
	}
	while(i>=1);
    return 0;
}
