// 1. a + b = 더하기
// 2. a - b = 빼기
// 3. a * b = 곱하기
// 4. a / b = 나누기
// 5. a % b = 나머지
//교재 75p

// 1. int,int = int (정수 더하기 정수는 정수)
// 2. int,float = float  ( 정수 더하기 실수는 실수)
// 3. int, char = (int, 정수)
// 4. char, char = char
// 5. char,float = float

#include <stdio.h>
main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d", num1, num2, num1 % num2);

	int int_num = 1;
	float float_num = 1.2;

	printf("%d + %.1f = %.1f", int_num, float_num,int_num + float_num);

	return 0;
}