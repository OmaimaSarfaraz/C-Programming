#include<iostream>;
using namespace std;
int countDigits(int num)
{      
    int count=0;
	while(num!=0)
	{  
	    num/=10;
	    count++;
		}
	return count;
}
int main()
{ 
    int number;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<"Number of digits: "<<countDigits(number)<<endl;
	return 0;
}

