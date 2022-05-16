#include<stdio.h>

int main(void) {
	char name[20];

	for (int i = 0; i < 5; i++) {
		scanf_s("%c\t", &name[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%c", name[i]);
	}

	return 0;

}