#include <stdio.h>

char b[3] [3] = {
		{'0', '0', '0'},
		{'0', '0', '0'},
		{'0', '0', '0'}
	};

void board() {
	printf("%c|%c|%c\n", b[0] [0], b[0] [1], b[0] [2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n", b[1] [0], b[1] [1], b[1] [2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n", b[2] [0], b[2] [1], b[2] [2]);
}

int pos;

void player() {
	char p = 'X';
	
	printf("Player : 위치를 정해주세요 : ");
	scanf("%d", &pos);
	
	b[pos / 3] [pos % 3 - 1] = p;
}

void computer() {
	char com = 'O';
	
	printf("Player : 위치를 정해주세요 : ");
	scanf("%d", &pos);
	
	b[pos / 3] [pos % 3 - 1] = com;
}

int main() {
	board();
	
	for (int i = 0; i < 9; i++) {
		
		if (i % 2 == 1) {
			player();	
		} else {
			computer();
		}
		
		board();
	}
	
	return 0;
}