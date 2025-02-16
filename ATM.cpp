#include<iostream>
using namespace std;
int main()
{
	int balance,amount;
	cout<<"Enter balance: ";
	cin>>balance;
	do
	{
		cout<<"Enter amount: ";
		cin>>amount;
		if(amount==0)
		{
			cout<<"invalid";
			break;
		}
		if(amount>balance || amount%500==0)
		{ cout<<"NOO.\n";
		 continue;
		}
		balance-=amount;
		cout<<"Remain: "<<balance<<endl;
	}while(amount!=0);
	return 0;
}
