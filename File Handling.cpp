#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,n1,sum=0;
	cout<<"Enter First Number: ";
	cin>>n;
	cout<<"Enter Second Number: ";
	cin>>n1;
	sum=n+n1;
	cout<<"The sum of "<<n<<" and "<<n1<<" is: "<<sum<<endl;
	ofstream file("Sum.txt",ios::app);
	if(!file)
	{
		cout<<"Not Found";
		return 1;
	}
	file<<"The sum of "<<n<<" and "<<n1<<" is: "<<sum<<endl;
	file.close();
	return 0;
}
