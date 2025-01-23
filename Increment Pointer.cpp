#include<iostream>
using namespace std;
void inc(int* ptr)
{
	*ptr=*ptr+1;
}
int main() 
{
  int num=54; 
  int* ptr=&num; 
  cout<<"Before increment: "<<num<<endl; 
  inc(ptr); 
  cout<<"After increment: "<<num<<endl; 
  return 0;
}
