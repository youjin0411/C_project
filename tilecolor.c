#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *solution(int tile_length)
{
    char *answer = (char *)malloc(sizeof(char) * (tile_length + 1));
    char com[6] = {'R', 'R', 'R', 'G', 'G', 'B'}; //타일 규칙 RRRGGB
    if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 4)
        //나머지가 1이면 R이 1개이므로 X,2이면 R이 2개이므로 X, 4이면 G가 1개 이므로X
        //즉 R은 연속 3번 나옴 3 G는 연속 두번 3 +2 = 5  B는 1번나옴 0
        strcpy(answer, "-1");
    else
    {
        for (int i = 0; i < tile_length; i++)
            answer[i] = com[i % 6];
        answer[tile_length] = '\0';
    }
    return answer;
}

int main()
{
    int tile_length1 = 11;
    char *ret1 = solution(tile_length1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    int tile_length2 = 16;
    char *ret2 = solution(tile_length2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}