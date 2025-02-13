#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=1;
    cout<<"Enter a number: "; 
	cin>>n;
    if(n<=1) 
	{
		flag=0;
	}
    else 
	{
        for(i=2;i*i<=n;i++)
		{
            if(n%i==0)
			{
			    flag=0;
				break;
			 }
        }
    }
    if (flag)
	{
		cout<<"Prime\n";
	}
    else 
	{
		cout<<"Not Prime\n";
	}
    return 0;
}

