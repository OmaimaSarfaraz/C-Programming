#include<iostream>
using namespace std;
int sum(int x, int y);
double sub(double x, double y);
void info(void);
int main()
{
	info();
	int a=10,b=90;
	int ans=sum(a,b);
	cout<<ans<<endl;
	double subtract=sub(5.20, 2.30);
	cout<<subtract;
	return 0;
}

int sum(int x, int y)
{
	return x+y;
}

double sub(double x, double y)
{
	return x-y;
}

void info()
{
	cout<<"Name: Omaima"<<endl;
	cout<<"ID: F24BSE001"<<endl;
}
