#include<stdio.h>
main()
{
	int a,b;
	printf("Value of A is : \n");
	scanf("%d",&a);
	printf("Value of B is : \n");
	scanf("%d",&b);
	printf("Arithmetic Operation -----------------------------------------::\n");
	printf("Addition of A and B is: %d \n",a+b);
	printf("Subtraction of A and B is: %d \n",a-b);
	printf("Multiplication of A and B is: %d \n",a*b);
	printf("division of A and B is: %d \n",a/b);
	

    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);  
    printf("a != b: %d\n", a != b); 
    printf("a > b: %d\n", a > b);    
    printf("a < b: %d\n", a < b);   
    printf("a >= b: %d\n", a >= b);  
    printf("a <= b: %d\n", a <= b);  
    
    printf("\n--- Logical Operations ---\n");
    printf("a > 0 && b > 0: %d\n", (a > 0 && b > 0));  
    printf("a > 0 || b > 0: %d\n", (a > 0 || b > 0));  
    printf("!(a > 0): %d\n", !(a > 0));  
	
}
