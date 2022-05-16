#include<stdio.h>
//포인터변수를 이용하여 변수의 값을 변경하시오.

int main(void) {
	int num = 10;
	int* num2;

	num2 = &num;
	
	*num2 = 20;

	printf("num의 값은 %d이고 num의 주소값은 %p이다\n", num, &num);
	printf("num2의 값은 %d이고 num2의 주소값은 %p이다.\n", *num2, num2);

	return 0;
}