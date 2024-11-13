#include <iostream> 
using namespace std;
int main()
{
	int table,length;
	cout<<"Which table you want to print: ";
	cin>>table;
	cout<<"Which length you prefer: ";
	cin>>length;
	for(int i=1;i<=length;i++)
	{
	  cout<<table<<" * "<<i<<" = "<<table*i<<endl;
	}
	return 0;
}
