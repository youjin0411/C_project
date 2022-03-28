//두 수를 입력받아 100이하의 자연수 중 두 수의 공배수를 구하는 프로그램 작성
#include <stdio.h>
int main(void)
{
    int a, b;
    prntf("두 수를 입력하시오 >");
    scanf("%d%d", &a, &b);

    for (int i = 1; i <= 100; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}