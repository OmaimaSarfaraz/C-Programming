#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int vowels=0,consonants=0;
	cout<<"Enter a string: ";
	getline(cin,str);
	for(size_t i=0;i<str.length();i++)
	{char ch=tolower(str[i]);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	vowels++;
	else if(ch>='a'&&ch<='z')
	consonants++;
	}
	cout<<"Vowels: "<<vowels<<"\nConsonants: "<<consonants<<endl;
	return 0;
}
