#include <stdio.h>
main(void)
{
	char good[] = "good!"; // null 문자 포함 7문자
	char* bad = "bad";

	good[0] = 'H';
	// good = "newgood";

	bad = "new bad";
	//bad[0] = 's';

	printf("%s %s", good, bad);
	return 0;
}