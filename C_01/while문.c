#include <stdio.h>
main(void){

	int hi = 1;
	while (hi <= 10) {
		printf("안녕하세요 %d\n", hi);
		hi++; // < = 10 까지 계속 반복
	}

	// while문 구구단 6단
	// six를 6으로 나눴을 때 나머지가 0이라면 6의 배수
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}

	// 사용자가 0을 입력할때 까지 멈추지 않는 프로그램
	// scanf_s 2번 들어감 ( 1개는 while문 밖에 , 다른거는 while 문 안에 )
	
	int num1;
	printf("숫자를 입력하세요.(0을 입력 받으면 종료)");
	scanf_s("%d", &num1);
	while (num1 != 0) {
		printf("입력한 숫자: %d\n", num1);
		printf("다시 숫자를 입력하세요 (0을 입력하면 종료)");
		scanf_s("%d", &num1); 
		{
			printf("0이므로 프로그램을 종료 합니다.");
		}
	}



	return 0;
}