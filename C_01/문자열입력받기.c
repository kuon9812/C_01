#include <stdio.h>
main(void)
{

	char string_text[] = "�ȳ��ϼ���!";     // �迭 �ۼ� ???  �迭 ���� ���� �ʰ� .. ?
	printf("���ڿ� ���� string_text�� ���̴� : %zu\n",sizeof(string_text));    
	// [] << �迭          int a �� 10,20,30,40,50 ���� �� ���� �־����. 0 1 2 3 4 ... �迭����.. �ε�����ȣ...?

	char english_text[] = "hello!";
	printf("���ڿ� ����english_text�� ���̴�: %zu\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴� : %zu", sizeof(long_text));
	
	printf("�迭 long_text�� ����� ���ڿ��� ����: %d\n",strlen(long_text));
	// strlen : �ʱ�ȭ ���� ���� ������ ����X

	printf("%s\n", long_text);

	char question[30] = "My name is ��ȣ";
	printf("%s\n", question);
	question[10] = "\0";
	// ����� ������ ���� �ε����� \0�� �����Ѵ�!!

	return 0;
}