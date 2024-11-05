//RUNTIME ERROR
#include<iostream>
using namespace std;
int main()
{   
    int num=27456,denominator=0,result;          //Variables initialization.
    result=num/denominator;                   //Division by 0
    cout<<"Result of dividing number by zero is: "<<result;       //Print results
    return 0;              
}

