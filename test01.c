#include <stdio.h>
#include <stdbool.h>
#include <time.h>
/*
배열5개를 생성하여 원하는 개수만큼 넣은 후 입력한 수들 중 최댓값과 최소값을 구한 후 두 수의 최대공약수를 구하시오.
*/

int main(void)
{
    int num[5];
    int max = 0;
    int min = 100;
    int result;
    int length = sizeof(num) / sizeof(num[0]);

    printf("숫자를 입력하시오");

    for (int i = 0; i < length; i++)
    {
        printf("%d번째 숫자를 입력하시오", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i <= length; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("최대값은 %d 최소값은 %d 최대공약수는 %d이다.", max, min);
    for (int i = 0; i < length; i++)
    {
        int temp = i;
        do
        {
            result = max % min;
            max = min;
            min = result;
        } while (result != 0);
    }

    printf("최대공약수는 %d 이다", max);

    return 0;
}