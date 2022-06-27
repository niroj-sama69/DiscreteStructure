//program to find boolean product of two boolean matrix
#include <stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    int first[5][5],second[5][5],multiply[5][5],sum = 0;
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&first[i][j]);
    }
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d",&p,&q);
    printf("Enter elements of second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d",&second[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
                sum = sum || first[i][j] && second[k][j];
            multiply[i][j] = sum;
            sum =0;
        }
    }
    printf("boolean product of matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
}

