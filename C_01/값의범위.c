#include <stdio.h>

main(void)
{
	// int �� 2147483648 ������
	// %d < int (4����Ʈ)    %lld < long long (8����Ʈ)     %u <  unsigned int     %zu << sizeof 
	
	// signed : �⺻���ǹ��� ! , �� �� �ֻ��� ��Ʈ�� ��ȣ��Ʈ�� ���
	// unsigned : ��� ��Ʈ�� ���� ��Ʈ�� ��� ( ����� ǥ�� ���� )    0 ~ 2^n - 1           * ���⼭ n�̶� ���Ʈ���� ���ϴ� ���ڰ� ����.   0�� ����� �����ϴ� - 1 ������� 
	// 0 : ���   1 : ����    1����Ʈ�� ���� ��� 8��Ʈ �� ù��° �ֻ��� ��Ʈ�� ��ȣ��Ʈ�� ��� �ϴϱ� ������ 7���� ��Ʈ�� ���� ������ ���
	
	// ����� ���� �׽�Ʈ

	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%zu\n",sizeof(num1));
	printf("%zu\n", sizeof(100));
	printf("%zu", sizeof(3.14));
	return 0;
}