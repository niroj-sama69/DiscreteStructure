#include <stdio.h>
#include <conio.h>

void dirGraph();
void undirGraph();
int main()
{
    int option;
    do
    {
        printf("Select an option");
        printf("\n1 Directed Graph\n");
        printf("\n2 Undirected Graph\n");
        printf("\n3 Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            dirGraph();
            break;
        case 2:
            undirGraph();
            break;
        case 3:
            return 0;
        }
    } while (1);
}

void dirGraph()
{
    int mat[50][50];
    int n, i, j;
    char c;
    printf("Enter number of vertices:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("is there and edge between vertices %d and %d(Y/N)", i, j);
            fflush(stdin);
            scanf("%c", &c);
            if (c == 'y' || c == 'Y')
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    printf("The adjacency matrix for the graph is \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
void undirGraph()
{
    int mat[50][50];
    int i, j, n;
    char c;
    printf("Enter number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("is there an edge between vertices %d and %d?(Y/N)", i, j);
            fflush(stdin);
            scanf("%c", &c);
            if (c == 'y' || c == 'Y')
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    printf("The adjacency matrix for the graph is \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}