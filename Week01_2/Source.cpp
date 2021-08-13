#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n_1, n_2, n_3;
	printf("Enter first integer number : ");
	scanf("%d", &n_1);
	printf("Enter second integer number : ");
	scanf("%d", &n_2);
	while (n_1 == n_2) {
		printf("### Please enter another integer number ###\n");
		printf("Enter second integer number : ");
		scanf("%d", &n_2);
	}
	printf("Enter third integer number : ");
	scanf("%d", &n_3);
	while (n_3 == n_1 || n_3 == n_2) {
		printf("### Please enter another integer number ###\n");
		printf("Enter third integer number : ");
		scanf("%d", &n_3);
	}
	if (n_1 > n_2 || n_1 > n_3) {
		if (n_2 > n_3) {
			printf("The number of pairs with the most total is : %d + %d = %d", n_1, n_2, n_1 + n_2);
		}
		else {
			printf("The number of pairs with the most total is : %d + %d = %d", n_1, n_3, n_1 + n_3);
		}
	}
	else {
		printf("The number of pairs with the most total is : %d + %d = %d", n_2, n_3, n_2 + n_3);
	}
	return 0;
}