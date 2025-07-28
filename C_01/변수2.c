#include <stdio.h>

int main(void)
{
	printf("안녕하세요\n");
	printf("오늘은 3번째 날 입니다.");

	int num = 3; // 선언과 초기화 동시
	int num2; //선언만 ...
	num2 = 2; // 초기화 
	num2 = 5; // 이것도 초기화 (위에 2는 사라짐)

	int num3 = 3;
	num3 = 10;

	int number1, number2; // 선언만 한 상태
	number1 = 10; // 초기화
	number2 = 20; // 초기화

	int number3 = 30, number4 = 40; // 자료형 1번 써서 선언과 초기화 여러번 가능

	// 변수명 규칙 
	int number = 10; // 영어로 구성 가능
	int number16 = 16; // 숫자조합 가능
	int number_20 = 20; // _ 언더바 가능
	int Number = 15; // 대소문자 구별 가능

	// 불가능한 변수병
	// int hello world = 1; // 공백 불가
	// int hell$!@$$ = 2; // 특수문자 불가
	// int 12number = 12; // 숫자를 먼저 사용 불가능
	// int int = 1; // 에약어 불가
	// int number - 14 = 14; //  -  하이픈 불가(마이너스 연산자로 인식 함)



	return 0;
}
