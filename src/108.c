#include <stdio.h>

int main() {
	int num;
	
	do {
		scanf("%d", &num);
		
		if (num > 0) {
			if (num % 2 == 1) {
				printf("홀수\n");
			} else {
				printf("짝수\n");
			}
		}
	} while (num > 0);
	
	return 0;
}