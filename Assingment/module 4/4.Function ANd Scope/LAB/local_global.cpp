//Variable Scope o Write a program that demonstrates the difference between local and global variables in C++. 
//Use functions to show scope. 
#include <iostream>
using namespace std;

int globalVar = 50; 
void showScope() 
{
    int localVar = 20; 
    cout <<"\nInside function - Global: " << globalVar << ", Local: " << localVar<<"\n";
}

main() 
{
    int localVar = 10; // Local to main
    cout <<"\nInside main - Global: " << globalVar << ", Local: " << localVar<<"\n";
    showScope();
}

