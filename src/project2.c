#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("clear");
	
	float rate_1, rate_2, rate_3; //반영비율
	int score_1, score_2, score_3; //점수
	float total_score; //총 점수
	
	printf("*** 과목별 점수 계산 프로그램 ***\n");
	
	printf("중간고사 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%f %d", &rate_1, &score_1);
	
	printf("기말고사 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%f %d", &rate_2, &score_2);
	
	printf("수행평가 반영 비율/받은 점수를 입력하세요 : ");
	scanf("%f %d", &rate_3, &score_3);
	
	total_score = (rate_1 * score_1) + (rate_2 * score_2) + (rate_3 * score_3);
	
	printf("점수는 %.1f입니다.\n", total_score);
	
	return 0;
}