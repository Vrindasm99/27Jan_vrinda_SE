//String Palindrome Check o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
#include <iostream>
#include <string>
using namespace std;

main() 
{
    string str, rev = "";
    cout<<"Enter a string: ";
    cin>>str;
    for (int i = str.length() - 1; i >= 0; i--) 
	{
        rev += str[i];
    }
    if (str == rev)
        cout<<"The string is a palindrome."<<"\n;
    else
        cout<<"The string is not a palindrome."<<"\n";

}



