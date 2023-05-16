#include <stdio.h>

int main() {
	
	int question, i = 1;
	
	printf("몇단이 궁금하신가요? => ");
	scanf("%d", &question);
	
	if (question == 0) {
		printf("0은 다 0이에요!\n");
	} else {
		while(i < 10) {
			printf("%d * %d = %d\n", question, i, question * i);
			i += 1;
		}
	}
	
	return 0;
}