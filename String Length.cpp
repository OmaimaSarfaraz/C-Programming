#include<iostream>
using namespace std;
void count(void);
int main()
{
	cout<<"Enter Sentence: ";
	count();
	return 0;
}

void count(void)
{
	char str[30];
	gets(str);
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i]<<" ";
		if(str[i]!=' ')
		{  
		    count++;
		}
	}
	cout<<"\nTotal Characters: "<<count;
}
