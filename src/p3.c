#include <stdio.h>

int main() {
	
	int a = 5, b = 7, c, d, e, f;
	c = a & b; // 5
	d = a | b; // 7
	e = a ^ b; // 2
	f = ~b; // -8
	a = a >> 1; //2
	b = b << 3; //56
	printf("%d, %d, %d\n", a, b, c);
	printf("%d, %d, %d\n", d, e, f);
}