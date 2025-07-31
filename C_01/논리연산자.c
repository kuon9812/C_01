// 논리연산자 종류
// && (and) : 그리고 (피연산자 중 1개라도 false이면 false이 된다.)
// || (or) : 또는 (피연산자 중 1개라도 true면 true가 된다.)
// !(not) : 논리부정 (피연산자가 true 라면 false를 출력)

#include <stdio.h>
main(void)
{
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// 10 > 20 ? false 
	// 20 >= 30 ? false
	
	printf("result:%d\n", result); // false 

	result = one <= two && two >= three && three <= four;
	printf("result:%d\n", result); // false

	result = one <= two && two <= three && three <= four;
	printf("result:%d\n", result); // true

	result = !(one > two);
	printf("result:%d\n", result); // true

	return 0;
}