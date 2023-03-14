#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


int askNumber(void) {
	int n = 0;
	printf("Enter an integer:\n");
	scanf("%d", &n);
	return n;
}


int main(int  argc, char** argv) {
	int num = 0;
	int sum = 0;
	while (num >= 0) {
		sum += num;
		num = askNumber();
	}
	printf("Sum of the non-negative integers: %d\n", sum);
	return 0;
}