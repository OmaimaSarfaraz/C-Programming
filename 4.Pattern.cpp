#include <iostream>
using namespace std;
int main() 
{
	int n;
    cout<<"Input Number Of Rows: ";
    cin>>n;
	int i=1;
    while(i<=n)
	 {  int j=1;
        while(j<=i)
		 {  cout<<i;
		    j++;
            }
		i++;
        cout<<endl; 
    }
    return 0;
}
