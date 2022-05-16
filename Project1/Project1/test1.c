#include<stdio.h>
int main(void) {
	int day[40][40] = { 0};
	int rst = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			rst++;
			day[i][j] = rst;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", day[i][j]);
		}
		printf("\n");
	}
	return 0; 
}