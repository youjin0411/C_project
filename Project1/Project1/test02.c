//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
#include<stdio.h>
int main(void) {
	int num;
	int score[10];

	printf("몇 개의 정수를 입력받을 지 입력 : ");
	scanf_s("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &score[i]);
	}
	int max = score[0];
	int min = score[0];
	for (int i = 0; i < num; i++) {
		if (score[i] > max) {
			max = score[i];
		}
		if (score[i] < min) {
			min = score[i];
		}
	}

	printf("최대값은 %d 입니다. ", max);
	printf("최소값은 %d 입니다. ", min);

	return 0; 
}