//Factorial Calculation Using Recursion o 
//Write a C++ program that calculates the factorial of a number using recursion. 
#include <iostream>
using namespace std;

int factorial(int n) 
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial not defined for negative numbers!";
    else
        cout << "Factorial of " << num << " is = " << factorial(num);

    return 0;
}

