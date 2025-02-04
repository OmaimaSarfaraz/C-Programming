#include<iostream>
using namespace std;
void Solve(int n);
void Solve(float a, float b, float c);
float Solve(int a, int b, int c, int d);
int main()
{
    Solve(8);          
    Solve(1.2, 3.4, 5.6);   
    Solve(10, 20, 30, 40);   
    return 0;
}

void Solve(int n)
{
	cout<<"Table of "<<n<<":\n";
	for(int i=1;i<=10;++i)
	{
	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	cout<<endl;
}

void Solve(float a,float b,float c)
{
    float sum=a*a+b*b+c*c;
	cout<<"Sum of squares: "<<sum<<endl;
	cout<<endl;
}

float Solve(int a,int b,int c,int d)
{
    float average=(a+b+c+d)/4.0f;
	cout<<"Average: "<<average<<endl;
	return average;
}
