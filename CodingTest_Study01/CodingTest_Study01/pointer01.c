#include<stdio.h>
//55와 22가 출력되도록 만드시오 (포이터 사용)
int main(void) {
	int numArr[5] = { 11, 22, 33, 44, 55 };

	int* num1;
	num1 = &numArr[1];
	int* num2;
	num2 = &numArr[4];

	printf("%d\n%d\n", *num1, *num2);
}

