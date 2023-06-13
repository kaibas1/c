#include <stdio.h>

int main() {
	int num;
	
	printf("홀짝 계산기 : ");
	scanf("%d", &num);
	
	while (num > 0) {
		if (num % 2 == 1) {
			printf("홀수\n");
		} else {
			printf("짝수\n");
		}
		
		scanf("%d", &num);
	}
	
	return 0;
}