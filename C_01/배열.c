#include <stdio.h>

main(void)
{

	int numbers[5] = { 10, 20, 30, 40, 50 }; // �ʱ�ȭ����Ʈ
	numbers[0] = 100;

	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			}
	}
	numbers[0] = 100;
	printf("�ִ밪: %d\n", max);

	return 0;
}