/*
注目のコメント
☆るり3歳☆
お疲れ様です。
たまに配信拝見させていただいております。
質問なのですがconst char* num[ ]={"123","45"}としたとき,
例えば数字を1回だけ入力して下3桁または2桁(配列の中身)が一致していたらtrueを返したいのですが
どうやるかが分かりません。
例えば仮に67123または01945と入力したら"一致"みたいな感じにしたいです。
何かアドバイスをお願いしたいです_(._.)_
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
	//	A:"xyz\0"     ... 一致
	//
	//	B:"xyz"
	//	A:"abcwxy"
	//	A:"bcwxy"
	//	A:"cwxy"
	//	A:"wxy"
	//	A:"xy\0"      ... 不一致

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
