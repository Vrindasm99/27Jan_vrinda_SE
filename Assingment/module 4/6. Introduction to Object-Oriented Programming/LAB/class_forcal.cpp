//Class for a Simple Calculator o Write a C++ program that defines a class 
//Calculator with functions for addition, subtraction, multiplication, and division.
// Create objects to use these functions. 

#include <iostream>
using namespace std;

class A 
{
	public:
		int add(int a, int b) 
		{
		    cout<<"\nAdditon is ="<<a+b;
		}
		
};
class S
{
	public:
		int sub(int a, int b) 
		{
		    cout<<"\nSubtraction is ="<<a-b;
		}
};
class M 
{
	public:
		int mul(int a, int b) 
		{
		     cout<<"\nMultiplication is ="<<a*b;
		}
};
class D 
{
	public:
		int div(int a, int b) 
		{
		     cout<<"\n5Division is ="<<b/a;
		}
};
main() 
{
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
	
	A a;
	S s;
	M m;
	D d;
	
	a.add(x,y);
	s.sub(x,y);
	m.mul(x,y);
	d.div(y,x);
}

