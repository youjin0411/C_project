#include<stdio.h>
int main(void) {
	int arr[5] = { 10,20,30,40,50 };
	int n = sizeof(arr) / sizeof(int);
	for (int i = n - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	return 0; 
}