#include <stdio.h>

main(void)
{
	// int 는 2147483648 까지만
	// %d < int (4바이트)    %lld < long long (8바이트)     %u <  unsigned int     %zu << sizeof 
	
	// signed : 기본값의범위 ! , 맨 앞 최상위 비트를 부호비트로 사용
	// unsigned : 모든 비트를 숫자 비트로 사용 ( 양수만 표현 가능 )    0 ~ 2^n - 1           * 여기서 n이란 몇비트인지 정하는 숫자가 들어간다.   0을 양수로 포함하니 - 1 해줘야함 
	// 0 : 양수   1 : 음수    1바이트로 예를 들면 8비트 중 첫번째 최상위 비트를 부호비트로 사용 하니까 나머지 7개의 비트로 값의 범위를 계산
	
	// 깃허브 연동 테스트

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%zu\n",sizeof(num1));
	printf("%zu\n", sizeof(100));
	printf("%zu", sizeof(3.14));
	return 0;
}