// 1. 입력할 데이터에 자료형에 대응하는 형식문자.
// 2. 입력할 데이터가 저장 될 메모리 공간
// 3. scanf - > scanf_s 

#include <stdio.h>
main(void)
{
	int num; // 변수 선언
	scanf_s("%d",&num); // %d << 정수 입력 받는다.      &num << 입력 받은 정수를 넣는다. 
	printf("\n");      // 위에서 입력을 받고 출력을 위해 printf를 사용하여 줄바꿈 "\n" 을 넣는다.

	// scanf_s("입력:%d", &num);    출력과 입력 동시에  X 

	printf("입력:");
	scanf_s("%d", &num);
	// 이렇게 따로 따로 !

	return 0;

}