//scanf_s�� ����Ͽ� �� 3���� ���� �� �հ踦 ���ϴ� �ڵ带 �ۼ� !
//������ 4���� �����ϱ�

#include <stdio.h>
main(void)
{
	int x, y, z, total; // ���� ����

	printf("���� 3�� �Է�:"); // ����ڿ��� �ȳ� ���� ���
	scanf_s("%d %d %d", &x, &y, &z);  // ����ڰ� �Է��� ���� �Է�
	printf("\n");
	
	printf("x:%d\n", x);
	printf("x:%d\n", y);
	printf("x:%d\n", z);
	printf("\n");

	total = x + y + z; // total �ʱ�ȭ 
	printf("%d + %d + %d = %d\n", x,y,z,total); 

	float fnum;
	printf("�Ǽ� �Է�:");
	scanf_s("%f", &fnum);
	printf("�Էµ� ��:%0.2f", fnum);

	float scanf_pi;
	printf("������ �Է�:");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� ��:%.4f", scanf_pi);



	return 0;
}