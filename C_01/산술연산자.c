// 1. a + b = ���ϱ�
// 2. a - b = ����
// 3. a * b = ���ϱ�
// 4. a / b = ������
// 5. a % b = ������
//���� 75p

// 1. int,int = int (���� ���ϱ� ������ ����)
// 2. int,float = float  ( ���� ���ϱ� �Ǽ��� �Ǽ�)
// 3. int, char = (int, ����)
// 4. char, char = char
// 5. char,float = float

#include <stdio.h>
main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d", num1, num2, num1 % num2);

	int int_num = 1;
	float float_num = 1.2;

	printf("%d + %.1f = %.1f", int_num, float_num,int_num + float_num);

	return 0;
}