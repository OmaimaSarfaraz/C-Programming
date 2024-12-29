#include<iostream>
#include<string>
using namespace std;
struct arr{
	int age;
	string name;
};
int main()
{
   arr p1[2]={{18,"Ali"},{20,"Sara"}};
   cout<<"1.Name: "<<p1[0].name<<"      Age: "<<p1[0].age<<endl;
   cout<<"2.Name: "<<p1[1].name<<"     Age: "<<p1[1].age<<endl;
   return 0;
}
