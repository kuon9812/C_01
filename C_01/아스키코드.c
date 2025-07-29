#include <stdio.h>

main(void)
{
	//     %c    << 문자 출력      문자 주위에  >  '  '  < 이거 중요
	// 교재 345 p ~ 346 p


	char ch1 = 'A';                // 문자
	printf("%c\n", ch1);

	char ch2 = 65;             // 정수
	printf("%c\n", ch2);

	printf("문자: %c, 숫자: %d\n", ch1, ch1);
	printf("문자: %c, 숫자: %d\n", ch2, ch2);

	int n = 'A';
	printf("문자: %c, 숫자: %d\n", n, n);

	return 0;


}