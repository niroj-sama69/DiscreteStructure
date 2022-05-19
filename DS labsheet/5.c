//program to implement binary integer addition and subtraction
#include <stdio.h>
int addition(int a,int b)
{
    int c; //carry
    while(b!= 0)
    {
        //find carry and shift it left
        c = (a & b) <<1;
        //find sum
        a = a^b;
        b=c;
    }
    return a;
}
int subtraction(int a,int b)
{
    int carry;
    //get 2's complement of b and add in a
    b = addition(~b,1);
    while(b!=0)
    {
        //find carry and shift it left
        carry = (a & b)<<1;
        //find sum
        a = a^b;
        b=carry;
    }
    return a;
}
int main()
{
    int n1,n2,binAdd,binSub,binProd=0,binQuo=0,temp;
    printf("Input first integer value\n");
    scanf("%d",&n1);
    printf("Enter second integer value:\n");
    scanf("%d",&n2);
    binAdd = addition(n1,n2);
    binSub = subtraction(n1,n2);
    temp = n1;
    while(temp>0)
    {
        binProd = addition(binProd,n2);
        temp--;
    }
    temp = n1;
    while(temp>0)
    {
        temp = subtraction(temp,n2);
        binQuo++;
    }
    printf("Binary addition: %d\n",binAdd);
    printf("binary subtrction: %d\n",binSub);
    printf("binary product: %d\n",binProd);
    printf("binary division: %d\n",binQuo);

}
