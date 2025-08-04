/*
if(조건식){
	조건을 만족할 경우 실행할 코드를 작성;
} else { 
	조건의 값이 false라면 이 값이 실행됨
}
*/

#include <stdio.h>
main(void)
{

	int if_number = 10;
	if (if_number < 500) {
		printf("%d(이)가 500보다 작습니다.\n", if_number);
	}

	if (if_number == 3 ) {
		printf("%d 과 3은 같다.\n", if_number);
	} // 같지 않으므로 출력 X

	// 입력받은 하루 걸음수가 10000보 이상일 경우에만 
	// 하루에 %보 걷다니 대단해요! 좋은 습관입니다    출력. .. . ? ??? ? ?? 

	int a;

	printf("오늘 하루 얼마나 걸으셨나요?\n");
	scanf_s("%d", &a);
	if (a >= 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다.\n", a);
	}
	else {
		printf("좀 더 열심히 하세요.\n");
	}



	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.\n");
	}
	else {
		printf("alpha는 B와 다릅니다.\n");
	}



	// 당신이 좋아하는 숫자는 ? 10 이상이라면 10 이상이군요 ~ // 10 미만이라면 10 미만이군요 ~ 출력 
	int b;
	printf("당신이 좋아하는 숫자는 ?\n");
	scanf_s("%d", &b);
	if (b>10) {
		printf("%d이라니, 10 이상이시군요 ~\n",b);
	} else {
		printf("%d이라니, 10 미만이군요~\n",b);
	}

	// 이해 잘 못함 복습해야함.


	return 0;
}