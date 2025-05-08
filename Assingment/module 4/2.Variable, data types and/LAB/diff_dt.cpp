//Write a C++ program that demonstrates the use of variables and constants. 
//Create variables of different data types and perform operations on them. 

#include <iostream>
#include <string>
using namespace std;

main() 
{
    string name, address;
    long long mob;
    int pincode, age, studentInput;
    char gender;
    bool isStudent;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your pincode: ";
    cin >> pincode;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/F/O): ";
    cin >> gender;
    cout << "Are you a student? Enter 1 for Yes, 0 for No: ";
    cin >> studentInput;
    isStudent = (studentInput == 1);
    cout << "Enter your mobile number: ";
    cin >> mob;
    cout << "\n--- User Details ---\n";
    cout << "Name       : " << name <<"\n";
    cout << "Mobile No. : " << mob<<"\n";
    cout << "Address    : " << address<<"\n";
    cout << "Pincode    : " << pincode<<"\n";
    cout << "Age        : " << age<<"\n";
    cout << "Gender     : " << gender<<"\n";
    cout << "Student    : " << (isStudent ? "Yes" : "No")<<"\n";

}

