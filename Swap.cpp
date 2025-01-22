#include<iostream>
using namespace std;
int main()
{
	int x=55,y=70,temp;
	cout<<"Before Swapping: "<<x<<" "<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"After Swapping: "<<x<<" "<<y<<endl;
	return 0;
}
