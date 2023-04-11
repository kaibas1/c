#include <stdio.h>

int main() {
	
	char name[10];
	int age = 0;
	char gender[7];
	
	printf("이름을 입력 : ");
	scanf("%s", name);
	
	printf("나이 입력 : ");
	scanf("%d", &age);
	
	printf("성별 입력 : ");
	scanf("%s", gender);
	
	printf("%s\n", name);
	
	printf("%d\n", age);
	
	printf("%s\n", gender);
	
	return 0;
}