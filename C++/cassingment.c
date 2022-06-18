#include <stdio.h>
#include <stdlib.h>

int main()
{
   int r1,c1,r2,c2;
    printf("Enter no of rows and columns of matrix: ");
    scanf("%d %d",&r1,&c1);
    int ar1[r1][c1];
    printf("\nEnter elements of the first matrix:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        scanf("%d",&ar1[i][j]);
    }
    printf("\nEnter no of rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
       int ar2[r2][c2];
       printf("\nEnter elements of the second matrix:\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        scanf("%d",&ar2[i][j]);
    }
    int mult[r1][c2];
    if(r2==c1)
    {
       for(int i=0;i<r1;i++)
       {
           for(int j=0;j<c2;j++)
           {
               mult[i][j]=0;
               for(int k=0;k<c1;k++)
                mult[i][j]=mult[i][j]+ar1[i][k]*ar2[k][j];
           }
       }
       for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            printf("%d ",mult[i][j]);
        printf("\n");
    }
    }
    else
        printf("Incompatible matrix size");

    printf("\n");
return 0;
}