#include<stdio.h>
/*
����ڷκ��� ������ �Է¹��� �� 2���� �迭�� ��Ÿ���ÿ�.3�� 4��
*/
int main(void) {
	int score[3][4];

	for (int i = 0; i < 3; i++) {
		printf("%d��° ���ڵ��� �� �Է� \n", (i + 1));
		for (int j = 0; j < 4; j++) {
			printf("���� �Է� : ");
			scanf_s("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t",score[i][j]);
		}
		printf("\n");
	}
	return 0;
}