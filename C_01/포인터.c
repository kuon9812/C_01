/*

1. 곱하기 : 별표연산자를 기준으로 피연산자들이 숫자값이나 변수로 이루어져 있다면 곱하기
2. 포인터 : 왼쪽에 자료형이 들어온다면 포인터 변수를 선언하는 것
3. 역참조 : 단항으로 쓰였다면 역참조

포인터 선언 방법

1. int* p
2. int* p
3. int* p
4. int* p
*/

#include <stdio.h>
main(void)
{

	int x = 10;
	printf("%p\n", &x);  
	// x의 주소를 p에 저장 하겠다.
	// int : 정수를 저장하는 4바이트 변수
	// &를 사용하면 주소에 접근할 수 있다.
	// *을 사용하면 주소를 저장할 수 있게 된다.

	int *p = &x; 
	
	printf("%p \n", p); // x의 시작 주소
	printf("%d \n", *p);
	// *p : 역참조 (주소 안에 있는 데이터값에 접근하는것)

	double d = 3.14;
	double* ptr = &d;

	printf("%p\n",ptr);
	printf("%.2f\n",*ptr);

	return 0;
}