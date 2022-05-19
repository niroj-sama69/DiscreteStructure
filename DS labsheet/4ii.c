//program to implement extended euclidean algorithm
#include <stdio.h>
int gcdExtended(int a,int b,int *x,int *y)
{
    int x1,y1,gcd;
    //base case
    if(a==0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    //to restore results of recursive call
    gcd = gcdExtended(b%a,a,&x1,&y1);
    //update x and y using results of recursive call
    *x = y1- (b/a)*x1;
    *y = x1;
    return gcd;
}
int main()
{
    int x,y;
    int a =35,b=15;
    int g=gcdExtended(a,b,&x,&y);
    printf("gcd(%d,%d)=%d",a,b,g);
}