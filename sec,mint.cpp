#include <iostream>
using namespace std;
int main()
{
	float sec,min,hr;
	cout<<"enter seconds";
	cin>>sec;
	cout<< sec<<"seconds";
	min=sec/60;
	cout<<endl<<min <<" minute in "<<sec<< " seconds";
	hr=sec/3600;
	cout<<endl<<hr<<" hour in "<<sec<< " seconds";
}
