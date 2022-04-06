#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len)
{
    int answer = 0;
    for (int i = 0; i < arr_len; i++)
        for (int j = 0; j < arr_len; j++)
            if (arr[i] % 2 == 0 && arr[i] / 2 == arr[j]) // j를 비교하는 이유는 : 배열의 모든 숫자에서 찾기 위해서
            {
                answer++;
                break;
            }
    return answer;
}

int main()
{
    int arr[] = {4, 8, 3, 6, 3};
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}