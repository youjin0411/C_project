#include<stdio.h>
#include<stdbool.h> //boolean�� ����� �� 
#include<string.h>
#include<stdlib.h>

bool solution(char *str) {
	int len = 0;
	char* s = (char*)malloc(sizeof(char) * 103);

	for (int i = 0; i < strlen(str); i++) {
		char ch = str[i];
		if (ch != ' ' && ch != '.') s[len++] = ch;
	}
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - 1 - i]) return false;
	}
	return true;
}

int main(void) { //mian(x), main(o)!!!!!!!!!!!!!
	char str[] = "racecar";
	int result;
	result = solution(str);
	if (result == true) {
		printf("�Ӹ���ҹ����Դϴ�.");
	}
	else {
		printf("�Ӹ���ҹ��ڰ� �ƴմϴ�.");
	}
	return 0;
}