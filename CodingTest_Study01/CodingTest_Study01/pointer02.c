#include<stdio.h>
/*
������ ������ ������ ������ �����ϰ� ������ �Է¹޾� ������ ������ �̿��Ͽ� 
������ ������ �޸� �ּҿ� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
	int number;
	int* number2 = NULL;

	printf("���ڸ� �Է����ּ��� > ");
	scanf_s("%d", &number);
	
	number2 = &number;
	printf("number�� �� : %d, number�� �ּ�: %p\n", number, &number);
	printf("number2�� �� : %d, number2�� �ּ� : %p\n", *number2, number2);

	return 0;
}