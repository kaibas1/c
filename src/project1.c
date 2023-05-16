#include <stdio.h>

int main() {
	
	int a, b; //입력
	int c, d, e, f, g; //출력
	
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	
	//처리
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = a % b;
	
	printf("%d + %d = %d\n", a, b, c);
	printf("%d - %d = %d\n", a, b, d);
	printf("%d * %d = %d\n", a, b, e);
	printf("%d / %d = %d\n", a, b, f);
	printf("%d %% %d = %d\n", a, b, g);
	
	return 0;
}