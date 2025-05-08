#include<stdio.h>
main()
{
	int a;
	
	printf("\n 1. JANUARY");
	printf("\n 2. FEBRUARY");
	printf("\n 3. MARCH");
	printf("\n 4. APRIL");
	printf("\n 5. MAY");
	printf("\n 6. JUNE");
	printf("\n 7. JULY");
	printf("\n 8. AUGUST");
	printf("\n 9. SEPTEMBER");
	printf("\n 10. OCTMBER");
	printf("\n 11. NOVEMBER");
	printf("\n 12. DECEMBER");
	printf("\n Enter the Opertor of your choice: \n");
	printf("ENTER NUMBER : ");
	scanf(" %c",&a);
	switch(a)
	{
		case '1':	
		printf("JANUARY");
		break;
		
		case '2':	
		printf("FEBRUARY");
		break;

		case '3':	
		printf("MARCH");
		break;

		case '4':	
		printf("APRIL");
		break;

		case '5':	
		printf("MAY");
		break;
		
		case '6':	
		printf("JUNE");
		break;

		case '7':	
		printf("JULY");
		break;

		case '8':	
		printf("AUGUST");
		break;
		
		case '9':	
		printf("SEPTEMBER");
		break;
		
		case '10':	
		printf("OCTMBER");
		break;

		case '11':	
		printf("NOVEMBER");
		break;

		case '12':	
		printf("DECEMBER");
		break;

		default:
		printf("Enter valid operator..!");
		break;	
	}
	printf("\n\n \t\t PROGRAM TO CHECK WHEATHER A NUMBER IS EVEN OR ODD !!!");

	if(a%2==0)
	{
		printf("\n A is even..");
	}
	else
	{
		printf("\n A is odd..");
	}
}
