/*

	프로그램 : 숫자 맞추기 게임
	만든사람 : 신동현
	만든날짜 : 2023/05/16

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int rnd, i = 1, user;
	
	srand(time(NULL));
	rnd = rand() % 10 + 1;
	
	
	while(i < 10) {
		printf("%d. 컴퓨터가 생각한 숫자를 입력 => ", i);
		scanf("%d", &user);
		
		if (user == rnd) {
			printf("와우 ^0^ 성공\n");
			printf("시도횟수 : %d", i);
			break;
		} else {
			printf("ㅠ.ㅠ 틀렸습니다.\n");
			i += 1;
		}
	}
	
	if (i == 10) {
		printf("게임 종료!\n");
		printf("컴퓨터가 생각한 숫자는 %d입니다.\n", rnd);
	}
	
	return 0;
}