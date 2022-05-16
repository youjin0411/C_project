#include<stdio.h>
int main(void) {
	int num[] = { 1,2,3,4,5 };
	int size = sizeof(num) / sizeof(int);
	for (int i = size-1; i >= 0; i--) {
		printf("%d\t", num[i]);
	}
	return 0; 
}