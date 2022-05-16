#include<stdio.h>
#include<string.h>

int main(void) {
	char city[5][8] = { "서울","부산","대구","인천","광주" };
	char a[5][8];

	char b[8] = "banana";

	for (int i = 0; i < 5; i++) {
		printf("city[%d]=%s\n", i, city[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("city[%d] = %s\n", i, a[i]);
	}

	printf("\n b = %s \n", b);

	return 0; 
}