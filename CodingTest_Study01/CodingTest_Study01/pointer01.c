#include<stdio.h>
//55�� 22�� ��µǵ��� ����ÿ� (������ ���)
int main(void) {
	int numArr[5] = { 11, 22, 33, 44, 55 };

	int* num1;
	num1 = &numArr[1];
	int* num2;
	num2 = &numArr[4];

	printf("%d\n%d\n", *num1, *num2);
}

