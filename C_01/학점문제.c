/*
	입력받은 학점이 90 이상이면 A
	80 이상이면 B
	70 이상이면 C
	60 이상이면 D
	입력받은 점수가 범위에 존재하지 않는다면 재시험 당첨 출력
*/

#include <stdio.h>
main(void)
{	
	int num1;
	printf("점수를 입력하세요.");
	scanf_s("%d", &num1);
	if (num1 >= 90) {
		printf("당신의 학점은 A 입니다.");
	}
	else if (num1 >= 80) {
		printf("당신의 학점은 B 입니다.");
	}
	else if (num1 >= 70) {
		printf("당신의 학점은 C 입니다.");
	}
	else if (num1 >= 60) {
		printf("당신의 학점은 D 입니다.");
	}
	else {
		printf("재수강 당첨");
	}


	return 0;
}