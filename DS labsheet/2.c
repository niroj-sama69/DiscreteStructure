//program to implement ceiling and floor function
#include <stdio.h>
#include <math.h>

int main()
{
    float val;
    float fVal,cVal;
    printf("Enter a float value ");
    scanf("%f",&val);
    fVal = floor(val);
    cVal = ceil(val);
    printf("Floor value is %f\n ceil value is %f\n",fVal,cVal);
}