#include <string.h>
#include <stdio.h>

int test_strcmp(const char* s1, const char* s2)
{
	for (;;) {
		const int x = *s1 - *s2;
		if (x == 0) {
			// *s1 �� *s2 �͓�����
			if (*s1 == '\0') {
				return 0;
			}
			else {
				++s1;
				++s2;
				continue;
			}
		} 
		else {
			// *s1 �� *s2 �͓������Ȃ�
			return x;
		}
	}
}
int main()
{
	char s1[] = "ABC";
	char s2[] = "AB";
	if (test_strcmp(s1, s2) == 0) {
		printf("s1 �� s2 �͓������B\n");
	}
	else {
		printf("s1 �� s2 �͓������Ȃ��B\n");
	}
}
