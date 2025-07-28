#include <stdio.h>

int main(void)

{
	int number1 = 1;
	// printf(number1); 출력 안 됨
	printf("번호 :%d\n나이 :%d\n",number1,number1);
	// %d << 정수 출력

	// 2 * 3 = 6
	// 조건 : 변수를 3개 선언하기
	// 힌트 : 곱하기는 * 을 사용한다.

	//int num1, num2, result;

	int num1 = 2;
	int num2 = 3;
	int result = num1 * num2;

	printf("%d * %d = %d\n" , num1, num2, result);

	// 위는 곱셈

	int num3 = 9;
	int num4 = 8;
	int age_1 = num3 + num4;

	printf("%d + %d = %d", num3, num4, age_1);

	// 위는 덧셈

	return 0;
}

