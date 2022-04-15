#include <stdio.h>
int main(void)
{
    int score[5][3];

    //입력창
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("score[%d][%d]의 숫자를 입력하시오. > ", i, j);
            scanf_s("%d", &score[i][j]);
        }
    }

    //출력창
    printf("==========출력을 해 봅시다============ \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}