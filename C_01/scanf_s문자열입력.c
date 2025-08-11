#include <stdio.h>
main(void)
{

	/*char scanf_string[50];
	printf("scanf_string 문자열을 입력하세요 :");
	scanf_s("%s",scanf_string,(unsigned int)sizeof(scanf_string));     // & << 배열은 안 써도 괜찮다 ?
	printf("%s\n", scanf_string);
	*/
	//%s : 공백이나 스페이스, 탭 등을 만나면 입력을 멈춘다.

	char getString[50]; // 변수 선언 
	printf("getString문자열을 입력하세요 :"); // 안내 메시지 출력
	gets_s(getString, sizeof(getString)); // 문자열 입력 받기
	printf("%s\n", getString); // 입력 받은 문자열 출력

	return 0;
}