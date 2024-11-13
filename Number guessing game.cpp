#include<iostream> 
#include<string>
using namespace std;
int main()
{  
   string name;
   int num=15,playernum=0,attempts=0,i=5;
   const int maxattempts=5;
   cout<<"Enter your name: ";
   getline(cin,name);
   cout<<"WELCOME! "<<name<<" to the number guessing game. "<<endl<<endl;
   cout<<"I am thinking of a number between 10 to 20."<<endl;
	
  while(playernum!=num && attempts<maxattempts)
	{ 
	 cout<<"Now You have "<<i<<" attempts."<<endl<<"Enter your guess: ";
	 cin>>playernum;
	 attempts++;
	 i--;
	   if(playernum>num)
	   {cout<<"Too high! Try again."<<endl;
	   }
	   else if(playernum<num)
	   {cout<<"Too low! Try again."<<endl;
	   }
	   
	   else 
	   {cout<<"Conratulations! You have guessed the number "<<num<<endl;
	   }
	}
	if(attempts==maxattempts)
	   {
	   	cout<<"YOU LOST! GOOD TRY";
	   }
	return 0;
}
