// �� ������ ����
// a > b
// a < b
// a >= b
// a<= b
// a >= b
// a == b     ����.
// a != b      Ʋ����.
// �� or ����    >> true or false  >> 1 or 0    Ʈ�� : 1    �޽� : 0

// ����������
// int a = ++b; 
// ����  ++b�� ����Ǿ� b�� ���������ڰ� ���� ����ǰ�, ������ ���� a�� ����

// int a = b++;
// ���� a����b�� ���� ������ �� b�� ���� ����

#include <stdio.h>
main(void)
{
	int a = 1, b = 10;

	printf("a>b:%d\n", a > b);
	printf("a<b:%d\n", a < b);
	printf("a>=b:%d\n",a>=b);
	printf("a<=b:%d\n", a <= b);
	printf("a==b:%d\n", a == b);
	printf("a!=b:%d\n", a != b);

	printf("\n");

	int A = 10, B = 20;
	printf("A:%d\n", A);
	printf("A:%d\n", ++A);    // A�� "���" 1 ����
	printf("A:%d\n", A);

	printf("\n");

	printf("B:%d\n", B);
	printf("B:%d\n", B++);   // B�� "������" 1 ����
	printf("B:%d\n", B);

	printf("\n");

	int num1, num2, num3, num4, result;
	num1 = 3;
	num2 = 4;
	num3 = 5;
	num4 = 6;
	result = num1 + num2 * num3 + num4;
	printf("%d + %d * %d + %d = %d", num1, num2, num3, num4, result);

	return 0;
}