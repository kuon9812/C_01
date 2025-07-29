#include <stdio.h>
#define PI = 3.14

main(void)
{
	// CONST = 상수
	// 숫자 바로바로 출력 리터럴상수
	//     정수 : int      /     실수 : double
	// sizeof << 바이트 알려주기
	// char int long long float shot    bit bite 값의 범위 언사잉 사잉 sizeof 아스키코드 상수 리터럴 심볼릭 매크로 

	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);

	const int MYCONST = 55;    // 변하지 않음 , 선언 / 초기화 동시 해야함 , 상수는 대문자로 쓰는게    국 룰 ! 
	
	//const int MYCONST2;      // 선언만 했음 
	//MYCONST2 = 15; // 값이 변할 수 없는데 시도 해서 문제 발생

	return 0;
}