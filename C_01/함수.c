/*
반환형 함수이름(매개변수) {
	return 0;
}

반환형: 함수가 처리 결과를 반환할 때 자료형
함수이름: 호출할 때 사용
매개변수: 함수를 작동시킬 자료 ( 무엇을 넣느냐에 따라 결과값이 달라짐 ) [없을수도 있음!]
return : 함수가 작업을 끝낸 뒤 호출한 곳으로 값을 돌려준다. void일 땐 return 생략 가능
*/

#include <stdio.h>

void HelloWorld() {
	printf("Hello World!\n");
}  // main 함수에서 HelloWorld(); 호출을 해야함 !

int add(int a, int b) {
	return a + b;
}

void helloName(char* name) {
	printf("Hello,%s \n", name);
}

main(void)
{
	HelloWorld();
	
	int sum = add(8,2);
	printf("sum:%d\n", sum);

	int sum2 = add(3, 5);
	printf("sum2:%d\n", sum2);

	helloName("준호");


	return 0;
}