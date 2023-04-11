#include <stdio.h>

int main() {
	
	printf("38 * 75 - 63 = 2787\n");
	
	long int a = 38, b = 75, c = 63;
	
	printf("%ld * %ld - %ld = %ld\n", a, b, c, a * b - c);
	
	a = a * b - c;
	
	printf("메모리[%ld] = %ld\n", &a, a);
	
	return 0;
}