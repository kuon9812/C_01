#include <stdio.h>
main(void)
{

	char string_text[] = "안녕하세요!";     // 배열 작성 ???  배열 길이 넣지 않고도 .. ?
	printf("문자열 변수 string_text의 길이는 : %zu\n",sizeof(string_text));    
	// [] << 배열          int a 에 10,20,30,40,50 전부 다 갖다 넣어버림. 0 1 2 3 4 ... 배열길이.. 인덱스번호...?

	char english_text[] = "hello!";
	printf("문자열 변수english_text의 길이는: %zu\n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는 : %zu", sizeof(long_text));
	
	printf("배열 long_text에 저장된 문자열의 길이: %d\n",strlen(long_text));
	// strlen : 초기화 되지 않은 공간은 포함X

	printf("%s\n", long_text);

	char question[30] = "My name is 준호";
	printf("%s\n", question);
	question[10] = "\0";
	// 출력을 끝내고 싶은 인덱스에 \0을 대입한다!!

	return 0;
}