//Write a C++ program that demonstrates arithmetic, relational, logical,
// and bitwise operators. Perform operations using each type of operator and display the results. 

#include <iostream>
using namespace std;

main() 
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;

    // Arithmetic Operators
    cout << "--- Arithmetic Operators ---";
    cout << "a + b = " << a + b;
    cout << "\na - b = " << a - b;
    cout << "\na * b = " << a * b;
    cout << "\na / b = " << a / b;
    cout << "\na % b = " << a % b;

    // Relational Operators
    cout << "\n--- Relational Operators ---";
    cout << "\na == b: " << (a == b);
    cout << "\na != b: " << (a != b);
    cout << "\na > b : " << (a > b);
    cout << "\na < b : " << (a < b);
    cout << "\na >= b: " << (a >= b);
    cout << "\na <= b: " << (a <= b);

    // Logical Operators
    bool x = true, y = false;
    cout << "\n--- Logical Operators ---" << endl;
    cout << "\nx && y = " << (x && y);
    cout << "\nx || y = " << (x || y);
    cout << "\n!x     = " << (!x);

    // Bitwise Operators
    cout << "\n--- Bitwise Operators ---";
    cout << "\na & b  = " << (a & b);
    cout << "\na | b  = " << (a | b);
    cout << "\na ^ b  = " << (a ^ b);
    cout << "\na << 1 = " << (a << 1); // Shift left (multiply by 2)
    cout << "\na >> 1 = " << (a >> 1); // Shift right (divide by 2)
}

