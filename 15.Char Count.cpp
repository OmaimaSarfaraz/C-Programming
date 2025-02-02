#include<iostream>
using namespace std;
int main()
{
    string str;
    int count[256]={0};
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
	{
        count[str[i]]++;
    }
    cout<<"The count of each character in the string "<<str<<" is:"<<endl;
    for(int i=0;i<str.length();i++)
	{
        if(count[str[i]]>0)
		{
            cout<<str[i]<<"\t"<<count[str[i]]<<endl;
            count[str[i]]=0;
        }
    }
    return 0;
}

