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
	// %.1f   << �Ҽ��� 1�ڸ� ��� �ҷ��� ".1" �� ����

	// ����
	//int sam = 5, maci = 9, voco = 13;
	//int hello = sam * maci * voco;
	//printf("������ :%d �Դϴ�.", hello);

	printf("\n");
	printf("\n");

	// ���� 64 / ���� 56 / ���� 87.5 / ��ȸ 76.8 / ���� 96.9      �Ҽ��� 2�ڸ� ���� ���
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg2 = total2 / 5.0f;
	printf("ö���� ����� :%.2f�� �Դϴ�.", avg2);

	return 0;
}