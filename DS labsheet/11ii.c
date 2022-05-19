//program to generate combination
#include <stdio.h>
int main()
{
    int n,r,i;
    long f1 = 1,f2 =1,f3=1,c;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        f1 = f1 *i;
    }
    for(i=1;i<=(n-r);i++)
    {
        f2 = f2 *i;
    }
    for(i=1;i<=r;i++)
    {
        f3 = f3 *i;
    }
    c = f1/(f2*f3);
    printf("C(%d,%d) is %d",n,r,c);
}