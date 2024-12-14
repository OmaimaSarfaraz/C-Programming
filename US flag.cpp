#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=11;j++)
		{
			if(i<=3 && j<=7)
			cout<<"* ";
			else
			cout<<"= ";
		}
	cout<<endl;	
	}
	return 0;
}
