#include <stdio.h>
int main()
{
	const char* p = "ABCDEFG";
	for (;;) {
		if (*p == '\0') {
			//*p は Null 文字である
			break;
		}
		else {
			//*p は Null 文字ではない
			putchar(*p);
			putchar('\n');
			++p;
			continue;
		}
	}
}
