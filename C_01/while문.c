#include <stdio.h>
main(void){

	int hi = 1;
	while (hi <= 10) {
		printf("�ȳ��ϼ��� %d\n", hi);
		hi++; // < = 10 ���� ��� �ݺ�
	}

	// while�� ������ 6��
	// six�� 6���� ������ �� �������� 0�̶�� 6�� ���
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}

	// ����ڰ� 0�� �Է��Ҷ� ���� ������ �ʴ� ���α׷�
	// scanf_s 2�� �� ( 1���� while�� �ۿ� , �ٸ��Ŵ� while �� �ȿ� )
	
	int num1;
	printf("���ڸ� �Է��ϼ���.(0�� �Է� ������ ����)");
	scanf_s("%d", &num1);
	while (num1 != 0) {
		printf("�Է��� ����: %d\n", num1);
		printf("�ٽ� ���ڸ� �Է��ϼ��� (0�� �Է��ϸ� ����)");
		scanf_s("%d", &num1); 
		{
			printf("0�̹Ƿ� ���α׷��� ���� �մϴ�.");
		}
	}



	return 0;
}