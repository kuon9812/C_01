#include <stdio.h>

// 사용자에게 이름을 받아서 안녕하세요 **님 출력하기
// 반환값이 없는 안녕하세요 **님 이라고 출력하는 함수 생성하기

void helloName(char* name) {
	printf("안녕하세요 %s님\n", name);
}

main(void)
{
	printf("이름을 입력해주세요.");
	scanf_s("");


	return 0;
}