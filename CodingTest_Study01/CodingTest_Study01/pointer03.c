#include<stdio.h>
//�����ͺ����� �̿��Ͽ� ������ ���� �����Ͻÿ�.

int main(void) {
	int num = 10;
	int* num2;

	num2 = &num;
	
	*num2 = 20;

	printf("num�� ���� %d�̰� num�� �ּҰ��� %p�̴�\n", num, &num);
	printf("num2�� ���� %d�̰� num2�� �ּҰ��� %p�̴�.\n", *num2, num2);

	return 0;
}