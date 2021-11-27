/*
���ڂ̃R�����g
�����3�΁�
�����l�ł��B
���܂ɔz�M�q�������Ă��������Ă���܂��B
����Ȃ̂ł���const char* num[ ]={"123","45"}�Ƃ����Ƃ�,
�Ⴆ�ΐ�����1�񂾂����͂��ĉ�3���܂���2��(�z��̒��g)����v���Ă�����true��Ԃ������̂ł���
�ǂ���邩��������܂���B
�Ⴆ�Ή���67123�܂���01945�Ɠ��͂�����"��v"�݂����Ȋ����ɂ������ł��B
�����A�h�o�C�X�����肢�������ł�_(._.)_
*/
bool match_suffix
( const char* A
, const char* B //suffix
)
{
	//	B:"xyz\0"
	//	A:"abcxyz"
	//	A:"bcxyz"
	//	A:"cxyz"
	//	A:"xyz\0"     ... ��v
	//
	//	B:"xyz"
	//	A:"abcwxy"
	//	A:"bcwxy"
	//	A:"cwxy"
	//	A:"wxy"
	//	A:"xy\0"      ... �s��v

	for (;;) {
		const char* a = A;
		const char* b = B;
		for (;;) {
			if (*a == *b) {
				if (*a == '\0')
					return true;
				else {
					++a;
					++b;
				}
			}
			else {
				if (*a == '\0')
					return false;
				else {
					++A;
					break;
				}
			}
		}
	}
}
const char* num[] = { "123","45" };
bool f(const char* s)
{
	for (int i = 0;;) {
		if (match_suffix(s, num[i]))
			return true;
		else if (++i < sizeof num / sizeof * num)
			continue;
		else
			return false;
	}
}
int main()
{
	const auto x = f("67123");
	const auto y = f("01945");
	const auto z = f("01946");
}
