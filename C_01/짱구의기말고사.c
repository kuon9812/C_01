#include <stdio.h>
main(void)
{
	//���� 65 / ���� 75 / ���� 88 / ��ȸ : 60 / ���� 96    ����� ���Ͻÿ�.   ���� 2��     �Ҽ��� 1�ڸ� ���.

	/*int num1 = 384, num2 = num1 /= 5;
	printf("%d /= ", num1, num2);*/             // ���� �ߴ� ��.
	
	// ������
	int total = 68 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("¯���� ����� :%.1f�� �Դϴ�.", avg);

	// ����
	//int sam = 5, maci = 9, voco = 13;
	//int hello = sam * maci * voco;
	//printf("������ :%d �Դϴ�.", hello);

	return 0;
}