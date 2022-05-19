//program to find join and meet of two boolean matrix
#include <stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    int first[5][5],second[5][5],join[5][5],meet[5][5];
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
            scanf("%d",&first[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            join[i][j]= first[i][j] || second[i][j];
            meet[i][j] = first[i][j] && second[i][j];
        }
    }
    
    printf("boolean join of matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",join[i][j]);
        }
        printf("\n");
    }
    printf("boolean meet of matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",meet[i][j]);
        }
        printf("\n");
    }
}

