#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Choose any one number from one to five. \nEnter a number: ";
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"Eat Samosy";
			break;
		case 2:
			cout<<"Eat Roll";
			break;
		case 3:
			cout<<"Do Not Eat";
			break;
		case 4:
			cout<<"Eat Sweet Dish";
			break;
		case 5:
			cout<<"Eat Biryani";
			break;	
		default:
		    cout<<"Invalid Number";				
	}
	return 0;
}
