#include <stdio.h>
main(void)
{

	/*char scanf_string[50];
	printf("scanf_string ���ڿ��� �Է��ϼ��� :");
	scanf_s("%s",scanf_string,(unsigned int)sizeof(scanf_string));     // & << �迭�� �� �ᵵ ������ ?
	printf("%s\n", scanf_string);
	*/
	//%s : �����̳� �����̽�, �� ���� ������ �Է��� �����.

	char getString[50]; // ���� ���� 
	printf("getString���ڿ��� �Է��ϼ��� :"); // �ȳ� �޽��� ���
	gets_s(getString, sizeof(getString)); // ���ڿ� �Է� �ޱ�
	printf("%s\n", getString); // �Է� ���� ���ڿ� ���

	return 0;
}