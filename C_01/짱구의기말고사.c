#include <stdio.h>
main(void)
{
	//국어 65 / 영어 75 / 수학 88 / 사회 : 60 / 과학 96    평균을 구하시오.   변수 2개     소수점 1자리 출력.

	/*int num1 = 384, num2 = num1 /= 5;
	printf("%d /= ", num1, num2);*/             // 내가 했던 것.
	
	// 나누기
	int total = 68 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("짱구의 평균은 :%.1f점 입니다.", avg); 
	// %.1f   << 소수점 1자리 출력 할려고 ".1" 을 붙임

	// 곱셈
	//int sam = 5, maci = 9, voco = 13;
	//int hello = sam * maci * voco;
	//printf("곱셈은 :%d 입니다.", hello);

	printf("\n");
	printf("\n");

	// 국어 64 / 영어 56 / 수학 87.5 / 사회 76.8 / 과학 96.9      소수점 2자리 까지 출력
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg2 = total2 / 5.0f;
	printf("철수의 평균은 :%.2f점 입니다.", avg2);

	return 0;
}