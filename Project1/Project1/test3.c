#include<stdio.h>
int main(void)
{
	char a;

	printf("알파벳 입력: ");
	scanf_s("%c", &a);

	printf("%c다음 알파벳은 %c", a, a + 1);
	return 0;
}
