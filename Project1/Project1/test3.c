#include<stdio.h>
int main(void)
{
	char a;

	printf("���ĺ� �Է�: ");
	scanf_s("%c", &a);

	printf("%c���� ���ĺ��� %c", a, a + 1);
	return 0;
}
