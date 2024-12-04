#include <iostream>
using namespace std;
int main()
{
	for(int i=10,j=1,k=20,l=5;i>=6,j<=6,k>=16,l<=20;i--,j++,k=k-2,l=l+5)
	{
		printf("%d %d %d %d\n",i,j,k,l);
	}
	return 0;
}
