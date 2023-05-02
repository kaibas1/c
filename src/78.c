#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int rnd;
	srand(time(NULL));
	rnd = rand() % 6 + 1;
	printf("%d\n", rnd);
	
	return 0;
}