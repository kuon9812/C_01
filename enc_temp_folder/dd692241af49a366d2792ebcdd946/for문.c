/*
for(초기값; 조건식;증감식) {
	조건이 참이라면 실행시킬 코드 
}
*/

#include <stdio.h>
main(void) {

	int forNumber;
	            // 초기값             조건식                       증감식
	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("반복 %d\n", forNumber);
	}
	
	int i;
	for (i = 10; i >= 1; i--) {
		printf("반복 %d\n", i);
	}

	// 제곱 계산기 만들기
	// 1의 제곱 : 1
	// 2의 제곱 : 4
	// 3의 제곱 : 9
	// 10 의 제곱 까지 ... ?? 
	
	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d의 제곱:%d\n", square, square* square);
	}

	// 무한 루프  (;;)
	for (;;) {

	}

	return 0;
}