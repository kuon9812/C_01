#include <stdio.h>
#define PI = 3.14

main(void)
{
	// CONST = ���
	// ���� �ٷιٷ� ��� ���ͷ����
	//     ���� : int      /     �Ǽ� : double
	// sizeof << ����Ʈ �˷��ֱ�
	// char int long long float shot    bit bite ���� ���� ����� ���� sizeof �ƽ�Ű�ڵ� ��� ���ͷ� �ɺ��� ��ũ�� 

	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));

	printf("%d\n", 10);

	const int MYCONST = 55;    // ������ ���� , ���� / �ʱ�ȭ ���� �ؾ��� , ����� �빮�ڷ� ���°�    �� �� ! 
	
	//const int MYCONST2;      // ���� ���� 
	//MYCONST2 = 15; // ���� ���� �� ���µ� �õ� �ؼ� ���� �߻�

	return 0;
}