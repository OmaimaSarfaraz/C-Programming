#include<iostream>
using namespace std;
void table(int);
int main()
{
	int a;
	cout<<"Enter number: ";
	cin>>a;
	table(a);
	return 0;
}

void table(int n)
{
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	 } 
}
