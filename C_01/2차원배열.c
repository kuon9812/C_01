#include <stdio.h>
int main(void)
{
	int a[3][4];
	a[0][0] = 10;
	printf("%d\n", a[0][0]);

	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	// arr[3][4]의 모든 요소 출력하기
	// 2중 for문 

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = 10;
			printf("%d", arr [i][j] );
		}
		printf("\n");
	}

	return 0;
}