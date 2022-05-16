#include<stdio.h>
#include<stdlib.h>

/*
정수 n을 입력받아 n개의 정수형 동적배열을 생성하고 n개의 정수를 입력받아 
최대값과 최소값을 출력하는 프로그램을 작성하시오.
*/
int main(void) {
	int num = 0;
	
	printf("입력받을 수를 구하시오. > ");
	scanf_s("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);

	printf("정수를 입력하시오 : ");
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < num; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("최대값은 : %d이고 최소값은 : %d이다.", max, min);
	return 0;
}