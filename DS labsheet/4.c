//program to implement euclidean  algorithms
#include <stdio.h>
//function to return gcd of a and b
int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
//driver program to test above function
int main()
{
    int a=10,b=15,c;
    c= gcd(a,b);
    printf("The gcd of %d and %d is %d\n",a,b,c);
    a=35,b=10;
    c= gcd(a,b);
    printf("The gcd of %d and %d is %d\n",a,b,c);
    a=31,b=2;
    c= gcd(a,b);
    printf("The gcd of %d and %d is %d\n",a,b,c);
}