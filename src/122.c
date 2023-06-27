#include <stdio.h>

int main() {
	int a, i, m1 = 0, m2 = 0;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &a);
		
		if (a % 2 == 1) {
			if (a > m1) {
				m1 = a;
			}
		} else {
			if (a > m2) {
				m2 = a;
			}
		}
	}
	
	printf("---------------------------\n");
	
	if (m1 > 0) {
		printf("%d\n", m1);
	}
	
	if (m2 > 0) {
		printf("%d\n", m2);
	}
	
	return 0;
}