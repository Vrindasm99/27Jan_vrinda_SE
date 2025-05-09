#include<stdio.h>
void main()
{
	int age;
	char name[20];
	double mob;
	printf("Enter your Age:");
	scanf("%d",&age);
	printf("Enter your Name: :");
	scanf("%s",&name);
	printf("Enter your Mobile:");
	scanf("%lf",&mob);
	printf("\nAge :%d\n",age);
	printf("Name :%s\n",name);
	printf("Mobile number :%.0lf\n",mob);
}
