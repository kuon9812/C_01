// ���ǽ� ? ������ �̰� ��µ˴ϴ�. (true) : Ʋ���� �̰� ��� �˴ϴ�.(false)


#include <stdio.h>
main(void)
{
	/*int ten = 10, twenty = 20;
	int max;

	max = ten > twenty ? ten : twenty;
	printf("�� ū ����:%d\n", max);*/

	// ����ڿ��� ���ڸ� �Է� �޾Ƽ� �� ���ڰ� ¦����� 0�� ���, Ȧ����� 1�� ���
	// ���� : ��� �޽��� [ �Է��� ���ڴ� *�̸�, ��� : 0 or 1 ]

	// 2�� ���� ������ ���� 0�̶�� ¦���̴�.

	int like_num, result;
	printf("����� �����ϴ� ���ڸ� �Է����ּ���:");
	scanf_s("%d", &like_num);

	result = (like_num %2 == 0) ?  0 : 1;
	printf("����� %d�� �����Ͻô±���?!\n", like_num, result);
	// �� Ʋ�ȴ� ~ 



	// ����ڰ� 20�� �̻��̶�� 1280�� ���϶�� 800���� �޴� ���α׷� �����
	
	//int a = 20;
	//int b;
	//
	//b = 

	//printf("���̸� �Է��ϼ���.");
	//scanf_s("%d",&a);
	//printf("\n");
	//printf("�Է��� ���̴� %d�̸�, ��� :", a);

	//int user_age, check;
	//printf("���̸� �Է��ϼ���:");
	//scanf_s("%d", &user_age); // ����ڷκ��� ���� �Է� �ޱ�
	//
	//check = user_age >= 20 ? 1280 : 800;
	//printf("%d���� ����ö �����:%d �Դϴ�.", user_age, check);

	return 0;
}