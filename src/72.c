#include <stdio.h>

int main() {
	
	char name[31], code;
	int age;
	float secure_num;
	
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	printf("부서코드를 입력하세요 : ");
	scanf(" %c", &code);
	
	printf("보안키를 입력하세요 : ");
	scanf("%f", &secure_num);
	
	printf("****************************\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("부서코드 : %c\n", code);
	printf("보안키 : %f\n", secure_num);
	printf("****************************\n");
	
	return 0;
}