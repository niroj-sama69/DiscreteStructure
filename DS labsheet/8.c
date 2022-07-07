//program to generate truth table of compound proposition (p->q) ^ -(q V r)
#include <stdio.h>
int main()
{
    char table[8][7];
    int i,j;

    table[0][0] = table[1][0] = table[2][0] = table[3][0] = 'T';
    table[4][0] = table[5][0] = table[6][0] = table[7][0] = 'F';
    table[0][1] = table[1][1] = table[4][1] = table[5][1] = 'T';
    table[2][1] = table[3][1] = table[6][1] = table[7][1] = 'F';
    table[0][2] = table[2][2] = table[4][2] = table[6][2] = 'T';
    table[1][2] = table[3][2] = table[5][2] = table[7][2] = 'F';

    for(i=0;i<8;i++)
    {
        if(table[i][0] == 'T' && table[i][1] == 'F')
            table[i][3] = 'F';
        else
            table[i][3] = 'T';
    }

    for(i=0;i<8;i++)
    {
        if(table[i][1] == 'F' && table[i][2] == 'F')
            table[i][4] = 'F';
        else
            table[i][4] = 'T';
    }

    for(i=0;i<8;i++)
    {
        if(table[i][4] == 'T')
            table[i][5] = 'F';
        else
            table[i][5] = 'T';
    }

    for(i=0;i<8;i++)
    {
        if(table[i][3] =='T' && table[i][5] == 'T')
            table[i][6] = 'T';
        else
            table[i][6] = 'F';
    }

    printf("p\tq\tr\tp->q\tqVr\t-(qVr)\t(p->q)^-(qVr)\n");
    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
            printf("%c\t",table[i][j]);
        printf("\n");
    }

} 