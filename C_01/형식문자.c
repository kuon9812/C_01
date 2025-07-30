// ���Ĺ��� ���� p 62 ~~
// %c %d %f %s %p �߿� !!

// %d = int, char, short : ���� (4����Ʈ)
// %c = char, short, int : ����
// %f = float, �Ǽ�, �Ҽ��� ...
// %s = char(���ڿ�)
// %p = ������ �ּҰ�

// %lld = long long (8����Ʈ)
// %u = unsigned int ��ȣ ���� ���� 
// %lf = long double, double (�޸� ���� �����ϴ� �Ǽ�)

#include <stdio.h>
main(void)
{
	long long x = 2200000000;
	printf("��:%lld\n", x);

	printf("%10d\n", 42);
	// %"10"d  <<< �� ĭ�� �������� ���� ?
	printf("%5d\n", 12345);
	printf("%5d\n", 123456); // �Ѿ�°� ����
	printf("%-10d", 123456); // ���� / ��� ǥ��� �Ȱ���  >>>  -10d <<< ���ʺ��� 10ĭ �Դ´� !
	printf("%d\n", 1);
	printf("%010d\n", 1234);

	printf("%8.2f\n", 3.1415);   // (8ĭ ��ġ ��, �Ҽ��� ��° �ڸ� ������ ���)    8 : ĭ ���� , 2: �Ҽ��� �ڸ��� 
	printf("%8.3f", 3.1415); 

	return 0;

}