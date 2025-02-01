#include<iostream>
using namespace std;
int main()
{
    char str1[]="i am omaima sarfaraz",str2[20];
    bool areEqual=true;
    cout<<"Enter second string: ";
    gets(str2);
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
	{
        if(str1[i]!=str2[i])
		{
            areEqual=false;
            break;
        }
        i++;
    }
    if(areEqual)
	{
    cout<<"Strings are Similar"<<endl;
    cout<<"Strings in reverse: ";
    i=0;
    while(str1[i]!='\0')
	{
        i++;
    }
    i--;
    while(i>=0)
	{
        cout<<str1[i];
        i--;
    }
    cout<<endl;
    }
    else
	{
    cout<<"Strings are not Similar"<<endl;
    cout<<"First string in reverse: ";
    i=0;
    while(str1[i]!='\0')
	{
        i++;
    }
    i--;
    while(i>=0)
	{
        cout<<str1[i];
        i--;
    }
    cout<<endl;
    cout<<"Second string in reverse: ";
    i=0;
    while(str2[i]!='\0')
	{
        i++;
    }
    i--;
    while(i>=0)
	{
        cout<<str2[i];
        i--;
    }
    cout<<endl; }
    return 0;
}

