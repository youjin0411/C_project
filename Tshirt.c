#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int *solution(char *shirt_size[], int shirt_size_len)
{
    int *answer = malloc(sizeof(int) * 6);
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < shirt_size_len; i++)
    {
        printf("%s를 몇 개 주문하실건가요 ? ", shirt_size[i]);
        printf("\n");
        scanf("%d개 주문하겠습니다.", &answer[i]);
    }
    return answer;
}
int main()
{
    char *shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
    int shirt_size_len = 6;
    int *ret = solution(shirt_size, shirt_size_len);

    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < 6; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}
