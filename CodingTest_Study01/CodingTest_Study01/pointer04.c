#include<stdio.h>
#include<stdlib.h>

/*
���� n�� �Է¹޾� n���� ������ �����迭�� �����ϰ� n���� ������ �Է¹޾� 
�ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
	int num = 0;
	
	printf("�Է¹��� ���� ���Ͻÿ�. > ");
	scanf_s("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);

	printf("������ �Է��Ͻÿ� : ");
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

	printf("�ִ밪�� : %d�̰� �ּҰ��� : %d�̴�.", max, min);
	return 0;
}