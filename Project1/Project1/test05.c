#include<stdio.h>
/*
1
1	3
1	3	5
1	3	5	7
*/
int main(void) {
	int score[4][4];
	
	for (int i = 1; i <= 4; i++) {
		score[i][1] = 1;
		printf("%d\t", score[i][1]);
		for (int j = 2; j <= i; j++) {
			score[i][j] = score[i][j - 1] + 2;
			printf("%d\t", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}