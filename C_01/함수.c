/*
��ȯ�� �Լ��̸�(�Ű�����) {
	return 0;
}

��ȯ��: �Լ��� ó�� ����� ��ȯ�� �� �ڷ���
�Լ��̸�: ȣ���� �� ���
�Ű�����: �Լ��� �۵���ų �ڷ� ( ������ �ִ��Ŀ� ���� ������� �޶��� ) [�������� ����!]
return : �Լ��� �۾��� ���� �� ȣ���� ������ ���� �����ش�. void�� �� return ���� ����
*/

#include <stdio.h>

void HelloWorld() {
	printf("Hello World!\n");
}  // main �Լ����� HelloWorld(); ȣ���� �ؾ��� !

int add(int a, int b) {
	return a + b;
}

void helloName(char* name) {
	printf("Hello,%s \n", name);
}

main(void)
{
	HelloWorld();
	
	int sum = add(8,2);
	printf("sum:%d\n", sum);

	int sum2 = add(3, 5);
	printf("sum2:%d\n", sum2);

	helloName("��ȣ");


	return 0;
}