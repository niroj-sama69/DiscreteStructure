#include <stdio.h>
#define SIZE 4
int main()
{
    long int x,y;
    int a[SIZE],b[SIZE],sum[SIZE];
    int M[SIZE] = {99,98,97,95};
    int i;
    printf("Enter two large numbers ");
    scanf("%ld%ld",&x,&y);
    for(i=0;i<SIZE;i++)
    {
        a[i] = x % M[i];
        b[i] = y % M[i];
    }
    printf("The set representing %ld and %ld under mod by (99,98,97,95)are \n",x,y);
    for(i=0;i<SIZE;i++)
        printf("%ld\t",a[i]);
    printf("\n");
    for(i=0;i<SIZE;i++)
        printf("%ld\t",b[i]);
    printf("\n");
    
    for(i=0;i<SIZE;i++)
    {
        sum[i] = (a[i] + b[i]) % M[i];
    }
    printf("The sum is\n");
    for(i=0;i<SIZE;i++)
        printf("%ld\t",sum[i]);
}