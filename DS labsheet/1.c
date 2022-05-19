//program to implement union,intersection,difference
#define MAX 30
#include <stdio.h>
#include <conio.h>
void create(int set[]);
void Union(int set1[],int set2[],int set3[]);
void intersection(int set1[],int set2[],int set3[]);
void difference(int set1[],int set2[],int set3[]);
int member(int set[],int x);
int main()
{
    int set1[MAX],set2[MAX],set3[MAX];
    int x,op;
    set1[0]=set2[0]=set3[0]=0;
    printf("\nCreating First Set");
    create(set1);
    printf("\nCreating second Set");
    create(set2);
    //calculate union
    Union(set1,set2,set3);
    //print set3 using for loop
    printf("\nUnion:\n");
    int n=set3[0];
    for(int i=1;i<=n;i++)
        printf("%d\t",set3[i]);
    //calculate intersection
    intersection(set1,set2,set3);
    printf("\nIntersection:\n");
    n=set3[0];
    for(int i=1;i<=n;i++)
        printf("%d\t",set3[i]);
    //calculate difference
    difference(set1,set2,set3);
    printf("\nDifference:\n");
    n=set3[0];
    for(int i=1;i<=n;i++)
        printf("%d\t",set3[i]);


}
//creates set[] with initial elements
void create(int set[])
{
    int n,i,x;
    set[0] = 0;//make it a null set
    printf("No. of elements in the set\n");
    scanf("%d",&n);
    printf("Elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&set[i]);
    set[0] = n;
}
//union of set 1 and set2 is stored in set3
void Union(int set1[],int set2[],int set3[])
{
    int i,n;
    //copy set1 in set3
    set3[0] = 0;    //make set3 null set
    n=set1[0];      //number of elements in the set
    for(i=0;i<=n;i++)
        set3[i] = set1[i];
    n=set2[0];
    for(i=1;i<=n;i++)
    {
        if(!member(set3,set2[i]))
            set3[++set3[0]]=set2[i];    //insert and increment number of elements
    }
}
//function returns 1 or 0 depending on whether x belongs to set[] or not
int member(int set[],int x)
{
    int i,n;
    n=set[0];   //number of elements is set
    for(i=1;i<=n;i++)
    {
        if(x==set[i])
            return 1;
    }
    return 0;
}
//intersection of set1 and set2 is stored in set3
void intersection(int set1[],int set2[],int set3[])
{
    int i,n;
    set3[0] = 0;    //make a null set
    n =  set1[0];   //number of elements in set
    for(i=1;i<=n;i++)
    {
        if(member(set2,set1[i]))
            set3[++set3[0]] = set1[i];
    }
}
//difference of set1  and set2 is stored in set3
void difference(int set1[],int set2[],int set3[])
{
    int i,n;
    n=set1[0];  //number of elements in set
    set3[0] = 0;
    for(i=1;i<=n;i++)
    {
        if(!member(set2,set1[i]))
            set3[++set3[0]] = set1[i]; //insert and increment no. of elements
    }
}