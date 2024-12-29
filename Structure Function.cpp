#include<iostream>
#include<string>
using namespace std;
void display(void);
struct person{
	int age;
	string name;
	char gender;
}p1;

int main()
{
	p1.age=18;
	p1.name="Omaima";
	p1.gender='F';
	display();
	return 0;
}

void display(void){
	cout<<"Name: "<<p1.name<<endl;
	cout<<"Age: "<<p1.age<<endl;
	cout<<"Gender: "<<p1.gender<<endl;
}
