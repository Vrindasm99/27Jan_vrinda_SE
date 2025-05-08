//Simple Calculator Using Functions.
// Write a C++ program that defines functions for basic arithmetic operations
// (add, subtract, multiply, divide). 
//The main function should call these based on user input. 
#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a+b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
        return b/a;   
}


int main() 
{
    int num1, num2;
    char c;

    cout<<"Enter the Number 1:";
    cin>>num1;
    cout<<"Enter the Number 2:";
    cin>>num2;
	cout<<"\nPress '+' for addition ";
    cout<<"\nPress '-' for subtraction ";
	cout<<"\nPress '*' for multiplication ";
	cout<<"\nPress '/' for division ";
	cout<<"\nEnter operator (+, -, *, /): ";
    cin>>c;

    switch(c) 
	{
        case '+': 
		cout <<"Addition = "<<add(num1, num2); 
		break;
        case '-': 
		cout << "Subtraction = " << subtract(num1, num2); 
		break;
        case '*': 
		cout << "Multiplication =" << multiply(num1, num2); 
		break;
        case '/': 
		cout << "Division = " << divide(num1, num2); 
		break;
        default: 
		cout << "Invalid operator!";
    }
}

