#include<iostream>
using namespace std;
int main()
{
	char ch[30];
	cout<<"Write Sentence: ";
	gets(ch);
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i]-=32;
	    }
	}
	cout<<"In Uppercase: "<<endl<<ch<<endl;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i]+=32;
	    }
	}
	cout<<"In Lowercase: "<<endl<<ch;
	return 0;
}
