#include <stdio.h>
/*
1
2       4
3       6       9
4       8       12      16
5       10      15      20      25
*/
int main(void)
{
    int score[5][5];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            score[i][j] = i * j;
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }

    return 0;
