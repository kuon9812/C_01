// 형식문자 교재 p 62 ~~
// %c %d %f %s %p 중요 !!

// %d = int, char, short : 숫자 (4바이트)
// %c = char, short, int : 문자
// %f = float, 실수, 소수점 ...
// %s = char(문자열)
// %p = 포인터 주소값

// %lld = long long (8바이트)
// %u = unsigned int 부호 없는 숫자 
// %lf = long double, double (메모 적게 차지하는 실수)

#include <stdio.h>
main(void)
{
	long long x = 2200000000;
	printf("값:%lld\n", x);

	printf("%10d\n", 42);
	// %"10"d  <<< 몇 칸을 공백으로 할지 ?
	printf("%5d\n", 12345);
	printf("%5d\n", 123456); // 넘어가는건 무시
	printf("%-10d", 123456); // 음수 / 양수 표기는 똑같음  >>>  -10d <<< 왼쪽부터 10칸 먹는다 !
	printf("%d\n", 1);
	printf("%010d\n", 1234);

	printf("%8.2f\n", 3.1415);   // (8칸 차치 중, 소수점 둘째 자리 까지만 출력)    8 : 칸 개수 , 2: 소수점 자리수 
	printf("%8.3f", 3.1415); 

	return 0;

}