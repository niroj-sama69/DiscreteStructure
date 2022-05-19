//program to compute a^n  using recursion
#include <stdio.h>
int power(int a,int n);
int main()
{
    int a,n,result;
    printf("Enter base numaer\n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&n);
    result = power(a,n);
    printf("%d ^ %d is %d",a,n,result);
}
int power(int a,int n)
{
    if(n==0)
        return 1;
    else
        return a*power(a,n-1);
}