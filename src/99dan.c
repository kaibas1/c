#include <stdio.h>

int main() {
	
	int question, i = 1;
	
	printf("몇단이 궁금하신가요? => ");
	scanf("%d", &question);
	
	while (question >= 0) {
		if (question == 0) {
			printf("0은 다 0이에요!\n");
		} else {
			i = 1;
			
			while(i < 10) {
				printf("%d * %d = %d\n", question, i, question * i);
				i += 1;
			}
		}
		
		printf("더 궁금하신게 있으신가요? => ");
		scanf("%d", &question);
	}
	
	return 0;
}