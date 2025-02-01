#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    string str;
    int vowels=0,cons=0,up=0,low=0,special=0,digits=0,words=1;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
	{
        if(isalpha(str[i]))
		{
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
			{
                vowels++;
            }
            else
			{
                cons++;
            }
            if(isupper(str[i])) 
			    up++;
            if(islower(str[i])) 
			    low++;
        }
        else if(isdigit(str[i]))
		{
            digits++;
        }
        else if(isspace(str[i]))
		{
            words++;
        }
        else
		{
            special++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<cons<<endl;
    cout<<"Uppercase letters: "<<up<<endl;
    cout<<"Lowercase letters: "<<low<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special characters: "<<special<<endl;
    cout<<"Words: "<<words<<endl;
    return 0;
}

