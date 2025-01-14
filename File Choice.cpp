#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream outFile("data.txt",ios::app);
	if(!outFile)
	{
		cout<<"Error opening file for writing!"<<endl;
		return 1;
    }
    string name;
	int age;
	char choice;
	do
	{
	    cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter age: ";
		cin>>age;
		outFile<<name<<" "<<age<<endl;
		cout<<"Do you want to add another entry? (y/n): ";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	outFile.close();
	cout<<"Data saved to file."<<endl;
	return 0;
}





