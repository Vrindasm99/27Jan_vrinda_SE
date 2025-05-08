#include <stdio.h>
#include <string.h>

main() 
{
    char a[10],b[10];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
   	printf("Concatinated String is : %s",strcat(a, b));
    printf("\n Length of the concatenated string: %zu\n", strlen(a));

}

