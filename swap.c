#include<stdio.h>

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 5, b = 8;
	swap(a, b);
	printf("함수 호출 후 \n");
	printf("a: %d b: %d\n",a, b);

	return 0;
}