//Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, 
//and another using Object-Oriented Programming (OOP) with a class and object for the same task.

#include<iostream>
using namespace std;

class aor
{
	public:
	void cal()
	{
		int l,b,a;
		cout<<"Enter L for Rectanlge:";
		cin>>l;
		cout<<"\nEnter B for Rectangle:";
		cin>>b;
		a=l*b;
		cout<<"\n\nArea of Rectangle is = "<<a;	
	}	
};

main()
{
	aor area;
	area.cal();
	
	int a,Area,b;
	cout<<"\n\n\n\n\nEnter the length of rectangle:";
	cin>>a;
	cout<<"\nEnter the breath of rectangle:";
	cin>>b;
	Area=a*b;
	cout<<"\n\nArea of Rectangle is = "<<Area;
}
