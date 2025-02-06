#include <iostream>
using namespace std;
int main() 
{
    int n=5; 
    for (int i=1; i<=n; ++i) 
        {
        for (int j=1; j<i; ++j) 
         {   cout<<" ";
           }
        cout<<i;
        if (i!=n) {
            for (int j=1; j<=2*(n-i)-1; j++ ) 
            {    cout<<" ";
              }
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

