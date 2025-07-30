//scanf_s를 사용하여 값 3개를 받은 후 합계를 구하는 코드를 작성 !
//변수는 4개를 선언하기

#include <stdio.h>
main(void)
{
	int x, y, z, total; // 변수 선언

	printf("정수 3개 입력:"); // 사용자에게 안내 문구 출력
	scanf_s("%d %d %d", &x, &y, &z);  // 사용자가 입력한 정수 입력
	printf("\n");
	
	printf("x:%d\n", x);
	printf("x:%d\n", y);
	printf("x:%d\n", z);
	printf("\n");

	total = x + y + z; // total 초기화 
	printf("%d + %d + %d = %d\n", x,y,z,total); 

	float fnum;
	printf("실수 입력:");
	scanf_s("%f", &fnum);
	printf("입력된 값:%0.2f", fnum);

	float scanf_pi;
	printf("원주율 입력:");
	scanf_s("%f", &scanf_pi);
	printf("입력된 값:%.4f", scanf_pi);



	return 0;
}