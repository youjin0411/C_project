//N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include<stdio.h>
int main(void) {
	int num;
	int score[10];

	printf("�� ���� ������ �Է¹��� �� �Է� : ");
	scanf_s("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("���� �Է� : ");
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

	printf("�ִ밪�� %d �Դϴ�. ", max);
	printf("�ּҰ��� %d �Դϴ�. ", min);

	return 0; 
}