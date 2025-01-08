#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("Example.txt");
	if(!file)
	{
		cout<<"Not Found";
		return 1;
	}
	file<<"Hello!"<<endl;
	file<<"My World."<<endl;
	file<<"Welcome!"<<endl;
	file.close();
	ifstream files("Example.txt");
	if(!files)
	{
		cout<<"Not Found";
		return 1;
	}
	string o;
	while(getline(files, o))
	{
		cout<<o<<endl;
	}
	files.close();
	return 0;
}
