#include <iostream>
using namespace std;
int main() 
{
    int n=5,num=1;  
    for (int i=1;i<=n;i++)
	{
        cout<<num;
        num++;
        if (i>1) 
		{ 
            for (int j=1; j<=2*(i-1)-1; ++j)
			{
                cout<<" ";
            }
            cout<<num;  
            num++;
        }
        cout<<endl;
    }
    return 0;
}
