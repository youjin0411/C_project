#include<stdio.h>
/*
정수형 변수와 포인터 변수를 선언하고 정수를 입력받아 포인터 변수를 이용하여 
정수형 변수의 메모리 주소와 값을 출력하는 프로그램을 작성하시오.
*/
int main(void) {
	int number;
	int* number2 = NULL;

	printf("숫자를 입력해주세요 > ");
	scanf_s("%d", &number);
	
	number2 = &number;
	printf("number의 값 : %d, number의 주소: %p\n", number, &number);
	printf("number2의 값 : %d, number2의 주소 : %p\n", *number2, number2);

	return 0;
}