//program to implement linear search using recursion
#include <stdio.h>
int linSearch(int a [],int l,int r, int key)
{
    if(r<l)
        return -1;
    if(a[l] == key)
        return l;
    return linSearch(a,l+1,r,key);
}
int main()
{
    int n,a[10],i,key;
    printf("Enter the size of list\n");
    scanf("%d",&n);
    printf("Enter the elements of list\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the key to search\n");
    scanf("%d",&key);
    int index = linSearch(a,0,n-1,key);
    if(index != -1)
        printf("Element %d is present at index %d",key,index);
    else
        printf("Element %d is  not present\n",key);
    return 0;
}