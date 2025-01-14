#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int a;
	float b;
	ofstream outFile("data.txt");
	if(!outFile)
	{
		cout<<"Error opening file for writing!"<<endl;
		return 1;	
	}
	cout<<"Enter an integer: ";
	cin>>a;
	cout<<"Enter a float: ";
	cin>>b;
	outFile<<a<<endl;
	outFile<<b<<endl;
	outFile<<"Sum: "<<a+b<<endl;
	outFile.close();
	ifstream inFile("data.txt");
	if(!inFile)
	{
		cout<<"Error opening file for reading!"<<endl;
		return 1;
	}
	cout<<"Reading data from file:"<<endl;
	inFile>>a;
	inFile>>b;
	cout<<"Integer: "<<a<<endl;
	cout<<"Float: "<<b<<endl;
	cout<<"Sum: "<<a+b<<endl;
	inFile.close();
	return 0;
}




