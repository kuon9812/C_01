/*
for(�ʱⰪ; ���ǽ�;������) {
	������ ���̶�� �����ų �ڵ� 
}
*/

#include <stdio.h>
main(void) {

	int forNumber;
	            // �ʱⰪ             ���ǽ�                       ������
	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("�ݺ� %d\n", forNumber);
	}
	
	int i;
	for (i = 10; i >= 1; i--) {
		printf("�ݺ� %d\n", i);
	}

	// ���� ���� �����
	// 1�� ���� : 1
	// 2�� ���� : 4
	// 3�� ���� : 9
	// 10 �� ���� ���� ... ?? 
	
	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d�� ����:%d\n", square, square* square);
	}

	// ���� ����  (;;)
	for (;;) {

	}

	return 0;
}