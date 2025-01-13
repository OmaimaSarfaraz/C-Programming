#include <iostream>
using namespace std;
struct Rectangle{
    int length,width;
};
int calculateArea(Rectangle r)
{
	return r.length*r.width;
}
int calculatePerimeter(Rectangle r)
{   return 2*(r.length+r.width);
}
int main()
{
	Rectangle rect;
	cout<<"Enter length: ";
	cin>>rect.length;
	cout<<"Enter width: ";
	cin>>rect.width;
	cout<<"Area: "<<calculateArea(rect)<<endl;
	cout<<"Perimeter: "<<calculatePerimeter(rect)<<endl;
	return 0;
}


