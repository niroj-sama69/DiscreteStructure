//program to calculate b^n mod m
#include <stdio.h>
int power(int b,unsigned int n,int m)
{
    int res = 1;    //initialise result
    b = b%m; //update b if it is more than or equal to m
    while(n>0)
    {
        //if n is odd multiply b with result
        if(n&1)
            res = (res*b) %m;
        //n must be even now
        n=n>>1;//y=y/2
        b=(b*b)%m;
    }
    return res;
}
int main()
{
    int b,n,m,result;
    printf("Enter value of b,n,m\n");
    scanf("%d%d%d",&b,&n,&m);
    result = power(b,n,m);
    printf("Modulo power is %d",result);
}