#include<iostream>
using namespace std;
int main()
{
	int pass=123,userpass,count=1;
	password:
    cout<<"Enter Password: ";
	cin>>userpass;
	if(pass==userpass)
	{
		cout<<"Welcome!"<<endl;
		return 0;
	}
	else
	{
		count++;
		if(count<4)
		goto password;
		else
		cout<<"3 Attempts Done!";
	}
	
	return 0;
}
