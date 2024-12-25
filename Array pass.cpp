#include<iostream>
using namespace std;
int length(char []);
void upper(char []);
int main()
{
	char str[]="imama";
	cout<<"length is: "<<length(str)<<endl;
	upper(str);
	return 0;
}

int length(char arr[])
{
	int l;
	for(int i=0;arr[i]!='\0';i++)
	{
		cout<<arr[i]<<endl;
		l++;
	}
	return l;
}
void upper(char up[])
{
	cout<<"Name in uppercase is: "<<endl;
	for(int i=0;up[i]!='\0';i++) 
	 {
        if(up[i]>='a' && up[i]<='z') 
		{
            up[i]=up[i]-('a'-'A');
            cout<<up[i]<<endl;      }
        	}
}
