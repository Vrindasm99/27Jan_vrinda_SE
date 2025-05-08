//Matrix Addition o Write a C++ program to perform matrix addition on two 2x2 matrices. 

#include <iostream>
using namespace std;

main() 
{
    int i,j, a[2][2], b[2][2], sum[2][2];
    cout << "Enter elements for 2x2 matrix A:\n";
    for(i=0;i<2;i++)
	{
        for(j=0;j<2;j++)
		{
            cout<<"Element["<<i+1<<"]["<<j+1<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements for 2x2 matrix B:\n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{	
           cout<<"Element["<<i+1<<"]["<<j+1<<"]:";
            cin>>b[i][j];
        }
    }


    cout<<"\nMatrix A is:\n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{
        	cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

   cout<<"\nMatrix B is:\n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{
        	cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    // Matrix Addition
    cout <<"\nSum of matrices A and B is:\n";
    for(i=0;i<2;i++) 
	{
        for(j=0;j<2;j++) 
		{	
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout <<"\n";
    }
}

