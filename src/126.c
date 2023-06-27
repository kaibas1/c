#include <stdio.h>

int main() {
	int i, nums[5] = {10, 20, 30, 40, 50};
	
	for (i = 0; i < 5; i++) {
		printf("%d\n", nums[i]);
	}
	
	nums[2] = 33;
	printf("%d\n", nums[2]);
	
	return 0;
}