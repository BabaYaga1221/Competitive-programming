#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of matrix:\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("enter the elements of first matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Multiplication of two matrices are:\n");
    int c[n][n];
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            c[i][j] = 0;
            for (int k=0;k<n;k++)
            {
                c[i][j] +=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
