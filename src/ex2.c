#include <stdio.h>

int main() {
	int num = 1, sum = 0;
	
	while (num <= 100) {
		if (num % 4 == 0) {
			sum += num;
		}
		
		num++;
	}
	
	printf("1부터 100까지 정수 중 4의 배수의 합은 %d 입니다.\n", sum);
	
	return 0;
}