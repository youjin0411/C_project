//두 수의 평균 이하를 출력하는 프로그램
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("두 수를 입력하시오 : ");
    scanf("%d%d", &a, &b);
    int average = (a + b) / 2;
    printf("%d와 %d의 평균은 %d이다.", a, b, average);

    for (int i = 0; i < average; i++)
    {
        printf("%d\t", i);
    }
    return 0;
}