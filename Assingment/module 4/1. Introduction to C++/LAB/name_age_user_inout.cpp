//input/Output o Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.

#include<iostream>
using namespace std;
main()
{
	int b;
	string a;
	cout<<"Enter the Name of Student:";
	cin>>a;
	cout<<"Enter the Age of Student :";
	cin>>b;
	cout<<"\n\n\t\t---------Student_Info-----------\n\n";
	cout<<"\t\tStudent_Name:"<<a<<"\n";
	cout<<"\t\tStudent_Age: "<<b;
}
