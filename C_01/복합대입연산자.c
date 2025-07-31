// 종류 : 풀이
// a = b : a에 b를 대입
// a += b : a = a + b
// a -= b : a = a - b
// a *= b : a = a * b
// a /= b : a = a/b
// a %= b : a = a%b

#include <stdio.h>
main(void)
{	
	int num1 = 3, num2 = 4;

	num1 += 3;
	printf("num1+=3의 결과는 : %d\n", num1);

	num2 *= 4;
	printf("num2*=4의 결과는 : %d\n", num2);

	return 0;
}