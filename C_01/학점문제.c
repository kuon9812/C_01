/*
	�Է¹��� ������ 90 �̻��̸� A
	80 �̻��̸� B
	70 �̻��̸� C
	60 �̻��̸� D
	�Է¹��� ������ ������ �������� �ʴ´ٸ� ����� ��÷ ���
*/

#include <stdio.h>
main(void)
{	
	int num1;
	printf("������ �Է��ϼ���.");
	scanf_s("%d", &num1);
	if (num1 >= 90) {
		printf("����� ������ A �Դϴ�.");
	}
	else if (num1 >= 80) {
		printf("����� ������ B �Դϴ�.");
	}
	else if (num1 >= 70) {
		printf("����� ������ C �Դϴ�.");
	}
	else if (num1 >= 60) {
		printf("����� ������ D �Դϴ�.");
	}
	else {
		printf("����� ��÷");
	}


	return 0;
}