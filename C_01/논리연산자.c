// �������� ����
// && (and) : �׸��� (�ǿ����� �� 1���� false�̸� false�� �ȴ�.)
// || (or) : �Ǵ� (�ǿ����� �� 1���� true�� true�� �ȴ�.)
// !(not) : ������ (�ǿ����ڰ� true ��� false�� ���)

#include <stdio.h>
main(void)
{
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// 10 > 20 ? false 
	// 20 >= 30 ? false
	
	printf("result:%d\n", result); // false 

	result = one <= two && two >= three && three <= four;
	printf("result:%d\n", result); // false

	result = one <= two && two <= three && three <= four;
	printf("result:%d\n", result); // true

	result = !(one > two);
	printf("result:%d\n", result); // true

	return 0;
}