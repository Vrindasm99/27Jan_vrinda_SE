#include <stdio.h>
main()
{
	int i=1;
	printf("FOR LOOP. ");
    for(i=1;i<=10;i++) 
	{
        printf("%d ",i);
    }
    
	printf("\nWHILE LOOP. ");
	int j=1;
	while(j<=10)
	{
        printf("%d ",j);
        j++;
    }
    
    printf("\nDO-WHILE LOOP. ");
    int k=1;
    do
	{
        printf("%d ",k);
    	k++;
    } while(k<=10);
}
