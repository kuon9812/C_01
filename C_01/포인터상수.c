/*
const int *p -- > ���� ����� �ȴ�! ( �ּ� ������ ���� : �� ���� �Ұ�)
int const *p -- > ���� ����� �ȴ�! ( �ּ� ���� ���� : �� ���� �Ұ� )
int*const p -- > ������(�ּ�) ��� ( �ּ� ���� �Ұ� : �� ���� ����)
const int * const p = &y; -- > �ּҿ� �� ��� ����� �ƿ� ���� �Ұ�

const �� ��ġ�� * �տ� �ٴ��� �ڿ� �ٴ��Ŀ� ���� ����� �ǹ̰� �޶���
* �ڿ� const�� ������ �ּҰ� ����ΰ�

*/


#include <stdio.h>
main(void)
{
	int x = 10, y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	// CONST_POINTER = &y;  << ������ ����� ���Ŷ�� ���� �ھƳ��� �Ұ��� ??

	const int* p = &y;
	// *p = 30;      ���� ��� ���¶� �Ұ���
	p = &x;

	const int* const po = &y;
	//*po = 10;
	//po = &x;


	return 0;
}