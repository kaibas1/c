#include <stdio.h>

int main() {
	int i, j, l;
	
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 4; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n");

	for (i = 1; i <= 4; i++) {
		for (j = 4; j > i; j--) {
			printf("o");
		}
		
		for (l = 1; l <= i; l++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 1; i <= 5; i++) {
		for (l = 1; l <= (5 - i) / 2; l++) {
			printf(" ");
		}
		
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		
		printf("\n");
		
		i++;
	}
	
	printf("\n");
}