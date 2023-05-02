#include <stdio.h>

int main() {
	int num1 = 16, num2 = 44;
	int a = num1++;
	int b = --num2;
	
	printf("%d\n", a + b);
	printf("%d %d\n", num1, num2);
	
	return 0;
}