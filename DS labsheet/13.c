#include <stdio.h>
#include <conio.h>
void inputRelation(int mat[50][50],int n)
{
    int i,j;
    char c;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("Is there a relation from element %d to %d?(y/n)",i,j);
            fflush(stdin);
            scanf("%c",&c);
            if(c=='y'||c=='Y')
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    
    printf("The matrix for representing giver relation is\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }

}
int testReflexive(int mat[50][50],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(mat[i][i] ==0)
            return 0;
    }
    return 1;
}

int testTransitive(int mat[50][50],int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            for(k=1;k<=n;k++)
                if(mat[i][j]!=0 && mat[j][k] !=0)
                    if(mat[i][k] == 0)
                        return 0;
    return 1;
}
int testSymmetric(int mat[50][50],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(mat[i][j]!=0 && mat[j][i] == 0)
                return 0;
        }
    }
    return 1;
}
int testAntisymmetric(int mat[50][50],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(mat[i][j] !=0 && mat[j][i] !=0)
                if(i!=j)
                    return 0;
        }
    }
    return 1;
}
int main()
{
    int mat[50][50];
    int n,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    inputRelation(mat,n);


    if(testReflexive(mat,n))
        printf("the relation is reflexive\n");
    else
        printf("The relation is not reflexive\n");

    if(testTransitive(mat,n))
        printf("The relation is transitive\n");
    else 
        printf("The relation is not transitive\n");
    if(testSymmetric(mat,n))
        printf("The relation is symmetric\n");
    else
        printf("The relation is not symmetric\n");
    if(testAntisymmetric(mat,n))
        printf("The relation is anti-symmetric\n");
    else
        printf("The relation is not anit-symmetric\n");

    if(testReflexive(mat,n) && testSymmetric(mat,n) && testTransitive(mat,n))
        printf("It is equivalence relation\n");
    else
        printf("It is not equivalence relation\n");

}