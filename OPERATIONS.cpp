//Task 2:Arithmetic operations on data types.
#include<iostream>
using namespace std;
int main()
{
    // Declare two integers
    int num1=100, num2=25;
    // Declare two floating point numbers
    float float1=15.50, float2=5.50;
    
    // Perform calculations on integers
    int sum = num1 + num2;
    int diff = num1 - num2;
    int multiply = num1 * num2;
    int divide = num1 / num2;
    // Perform calculations on floats
    float fSum = float1 + float2;
    float Diff = float1 - float2;
    float Mul = float1 * float2;
    float Div = float1 / float2;
    
    // Print results of integers operations
    cout << "*****Integer Operations*****\n";
    cout << "Addition: " << sum << "\n";
    cout << "Subtraction: " << diff << "\n";
    cout << "Multiplication: " << multiply << "\n";
    cout << "Division: " << divide <<"\n\n\n";
   
    // Print results of float operations
    cout << "*****Floating Point Operations*****\n";
    cout << "Addition: " << fSum << "\n";
    cout << "Subtraction: " << Diff << "\n";
    cout << "Multiplication: " << Mul << "\n";
    cout << "Division: " << Div << "\n";
    
    return 0;
}
