//WRITE A PROGRAM THAT VERIFY IF A USER HAS THE REQUIRED CREDENTIALS AND SECURITY LEVEL
#include<iostream>
#include<string>
using namespace std;
int main()
{  
   string username,password;
   int sec_level;
   const string req_Username="admin";
   const string req_Password="@12pass";
   const int req_Security=4;
   cout<<"ENTER YOUR USERNAME: ";
   cin>>username;
   cout<<"ENTER YOUR PASSWORD: ";
   cin>>password;
   cout<<"ENTER YOUR SECURITY LEVEL(1-5): ";
   cin>>sec_level;
   if(username==req_Username && password==req_Password)
   { if(sec_level>=req_Security)
      { cout<<"Access granted.You have all the required credentials and security level."<<endl;
	  }
	 else
	 { cout<<"Access denied.Your security level is too low."<<endl;
	 }
   }
   else
   { cout<<"Access denied.Invalid username or password."<<endl;
   }
   return 0;
}
