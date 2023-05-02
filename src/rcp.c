#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
	int com, win = 0;
	char user[10];
	
	srand(time(NULL));
	com = rand() % 3 + 1;
	
	printf("가위바위보!\n");
	scanf("%s", user);
	
	if(com == 1) {
		printf("com : 바위\n");
		if (strcmp(user, "바위") == 0) {
			win = 3;
		} else if(strcmp(user, "가위") == 0) {
			win = 2;
		} else {
			win = 1;
		}
	} else if(com == 2) {
		printf("com : 가위\n");
		if (strcmp(user, "바위") == 0) {
			win = 1;
		} else if(strcmp(user, "가위") == 0) {
			win = 3;
		} else {
			win = 2;
		}
	} else {
		printf("com : 보\n");
		if (strcmp(user, "바위") == 0) {
			win = 2;
		} else if(strcmp(user, "가위") == 0) {
			win = 1;
		} else {
			win = 3;
		}
	};
	
	if(win == 1) {
		printf("이겼다!\n");
	}else if(win == 2) {
		printf("졌다...\n");
	}else {
		printf("비겼다\n");
	};
	
	return 0;
}