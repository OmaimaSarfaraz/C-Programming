#include<iostream>
using namespace std;
int main()
{
	char op;
	float n1, n2;   
	cout<<"Enter two integers one by one: ";
	cin>>n1>>n2;
	cout<<"Enter an operator (+,-,*,/): ";
	cin>>op;
	
    switch(op)
    {
     case '+':
		{
		 cout<<n1<<" + "<<n2<<" = "<<n1+n2;
	     break;   }
	 case '-':
	 	{
		 cout<<n1<<" - "<<n2<<" = "<<n1-n2;
	     break;   }
	 case '*':
	 	{
		 cout<<n1<<" * "<<n2<<" = "<<n1*n2;
	     break;   }
	 case '/':
	 	{ if(n2!=0)
		  { cout<<n1<<" / "<<n2<<" = "<<n1/n2;
	        }
	      else
	     { cout<<"Division by zero is not allowed";
		   }
		  break;   }

	 default:
	    	cout<<"Invalid Operator";
    }	   
 return 0;
}
