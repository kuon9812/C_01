#include <stdio.h>
main(void)
{
	// 배열포인터
	int arr[3] = { 1,2,3 }; // 정수 3개로 이루어진 배열
	int (*arrptr)[3] = &arr; // arr 배열 자체의 주소를 가리키는 변수를 선언
	printf("첫번째 요소는 : %d \n", (*arrptr)[0]);
	printf("두번째 요소는 : %d \n", (*arrptr)[1]);
	printf("세번째 요소는 : %d \n", (*arrptr)[2]);
	
	int(*in)[2];
	return 0;
}