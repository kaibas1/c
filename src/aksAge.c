#include <stdio.h>

int main() {
	
	int Nmonth = 4, Ndate = 11;
	int month = 0, date = 0;
	int age = 0;
	int aksAge = 0;
	
	printf("나이를 입력 : ");
	scanf("%d", &age);
	
	printf("생일(월) 입력 : ");
	scanf("%d", &month);
	
	printf("생일(일) 입력 : ");
	scanf("%d", &date);
	
	if(month > Nmonth) {
		aksAge = age - 1;
	}else if(month = Nmonth && date < Ndate) {
		aksAge = age - 1;
	}else {
		aksAge = age - 2;
	}
	
	printf("당신의 만 나이는 : %d\n", aksAge);
}