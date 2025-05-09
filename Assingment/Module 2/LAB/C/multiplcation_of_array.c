#include <stdio.h>
main()
{
    int i,j,k,A[2][2],B[2][2],C[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             printf("enter value for matrix A - %d %d: ", i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             printf("enter value for matrix B -%d %d: ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < 2; k++)
                {
                C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    printf("multiplication matrix C:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }


}
