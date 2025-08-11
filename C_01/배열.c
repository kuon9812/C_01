#include <stdio.h>

main(void)
{

	int numbers[5] = { 10, 20, 30, 40, 50 }; // 초기화리스트
	numbers[0] = 100;

	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
			}
	}
	numbers[0] = 100;
	printf("최대값: %d\n", max);

	return 0;
}