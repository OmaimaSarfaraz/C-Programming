#include<iostream>
using namespace std;
int main()
{
	cout<<"Guess Number Challenge \n";
	for( ; ; )
	{
		int number, NUMBER;
		cout<<"Enter a number: ";
		cin>>number;
		NUMBER=5;
        if(number==NUMBER)
		{
			cout<<"You Won";
	        break;
		}
        else
		{
		cout<<"Try again \n";
	    }
	}
}
