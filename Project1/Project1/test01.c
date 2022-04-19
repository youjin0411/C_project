/*
100개 이하의 정수를 입력받아
첫 줄에 짝수번째 숫자들을 순서대로 출력하고
다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어보시오

입력받을 개수  : 6
입력받을 수 : 2, 3, 4, 5, 6, 7

출력예
3	5	7
2	4	6
*/
#include<stdio.h>

int main(void) {
	int score[105];
	int n;

	printf("입력받을 개수 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d번째 숫자 입력 : ", (i + 1));
		scanf_s("%d", &score[i]);
	}
	for (int i = 1; i < n; i += 2) {
		printf("%d\t", score[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i += 2) {
		printf("%d\t", score[i]);
	}
	printf("\n");

	return 0;
}