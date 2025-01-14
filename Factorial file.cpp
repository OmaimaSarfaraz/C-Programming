#include <iostream>
#include <fstream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{    
	    fact*=i;
	}
	return fact;
}

int main()
{
    ofstream outFile("factorial.txt",ios::app);
	if(!outFile)
	{
	cout<<"Error opening file for writing!"<<endl;
	return 1;
	}
	int number;
	cout<<"Enter a number to calculate its factorial: ";
	cin>>number;
	cout<<"Factorial of "<<number<<"! is "<<factorial(number)<<endl;
	outFile<<"Factorial of "<<number<<"! is "<<factorial(number)<<endl;
	outFile.close();
	cout<<"Factorial saved to file 'factorial.txt'."<<endl;
	return 0;
	
}

