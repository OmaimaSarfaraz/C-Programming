#include<iostream>
using namespace std;
int n;
void square(void);
void cube(void);
int main()
{
	cout<<"Enter number: ";
	cin>>n;
	square();
	cube();
}

void square(void)
{
	cout<<"Square of "<<n<<" is: "<<n*n<<endl;
}

void cube(void)
{
	cout<<"Cube of "<<n<<" is: "<<n*n*n<<endl;
}
