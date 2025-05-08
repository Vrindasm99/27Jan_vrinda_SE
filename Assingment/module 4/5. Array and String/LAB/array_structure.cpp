//1. Array Sum and Average o Write a C++ program that accepts an array of integers, 
//calculates the sum and average, and displays the results.

#include <iostream>
using namespace std;

main() 
{
    int arr[100], n, sum = 0, avg;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
        sum += arr[i];
    }

    avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

}

