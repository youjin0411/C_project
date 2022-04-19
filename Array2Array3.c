#include <stdio.h>
/*
사용자로부터 점수를 입력받은 후 2차원 배열로 나타내시오.3행 4열
*/
int main(void)
{
    int score[3][4];

    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 숫자들의 수 입력 \n", (i + 1));
        for (int j = 0; j < 4; j++)
        {
            printf("숫자 입력 : ");
            scanf_s("%d", &score[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}