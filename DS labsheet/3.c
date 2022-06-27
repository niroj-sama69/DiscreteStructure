//program to implement fuzzy set operations
#include <stdio.h>
#define SIZE 50
void getdata(float set[]);
void showdata(float set[]);
void Union(float set1[],float set2[],float set3[]);
void intersection(float set1[],float set2[],float set3[]);
void complement(float set[],float set3[]);
int main()
{
    float set1[SIZE],set2[SIZE],set3[SIZE];
    int n;
    printf("Enter number of elements of fuzzy set\n");
    scanf("%d",&n);
    set1[0] = n;
    set2[0] = n;
    set3[0] = n;
    printf("\nFor first set ");
    getdata(set1);
    printf("\nFor second set ");
    getdata(set2);
    printf("\nFirst fuzzy set is\n");
    showdata(set1);
    printf("\nSecond Fuzzy set is\n");
    showdata(set2);
    printf("\nUnion of Fuzzy sets\n");
    Union(set1,set2,set3);
    showdata(set3);
    printf("\nIntersection of fuzzy sets\n");
    intersection(set1,set2,set3);
    showdata(set3);
    printf("\nComplement of  first fuzzy set\n");
    complement(set1,set3);
    showdata(set3);
    printf("\nComplement of second fuzzy set\n");
    complement(set2,set3);
    showdata(set3);
    return 0;

    
}
void getdata(float set[])
{
    int i;
    printf("Enter degree of membership\n");
    for(i=1;i<=set[0];i++)
        scanf("%f",&set[i]);
}
void showdata(float set[])
{
    for(int i=1;i<=set[0];i++)
        printf("x%d : %.2f, ",i,set[i]);
}
void Union(float set1[],float set2[],float set3[])
{
    for(int i=1;i<=set1[0];i++)
    {
        if(set1[i]>set2[i])
            set3[i] = set1[i];
        else
            set3[i] = set2[i];
    }
}
void intersection(float set1[],float set2[],float set3[])
{
    for(int i=1;i<=set1[0];i++)
    {
        if(set1[i]<set2[i])
            set3[i]= set1[i];
        else
            set3[i] = set2[i];
    }
}
void complement(float set[],float set3[])
{
    for(int i=1;i<=set[0];i++)
        set3[i] = 1 - set[i];
}