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

	// 곱셈
	//int sam = 5, maci = 9, voco = 13;
	//int hello = sam * maci * voco;
	//printf("곱셈은 :%d 입니다.", hello);

	return 0;
}