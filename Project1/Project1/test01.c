/*
100�� ������ ������ �Է¹޾�
ù �ٿ� ¦����° ���ڵ��� ������� ����ϰ�
���� �ٿ� Ȧ�� ��° ���ڵ��� ������� ����ϴ� ���α׷��� �����ÿ�

�Է¹��� ����  : 6
�Է¹��� �� : 2, 3, 4, 5, 6, 7

��¿�
3	5	7
2	4	6
*/
#include<stdio.h>

int main(void) {
	int score[105];
	int n;

	printf("�Է¹��� ���� : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d��° ���� �Է� : ", (i + 1));
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