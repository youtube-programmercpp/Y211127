#include <stdlib.h>
double 関数
( const int* a //整数型配列の先頭アドレス
, size_t     n //配列の大きさ（要素の数）
)
{
	if (n) {
		int 最大値 = *a;
		int 最小値 = *a;
		const int* const end = a + n;
		while (++a < end) {
			if (*a > 最大値) 最大値 = *a;
			if (*a < 最小値) 最小値 = *a;
		}
		return
			( 最大値
			+ 最小値
			) / 2.;
	}
	else
		exit(EXIT_FAILURE);
}
#include <stdio.h>
int main()
{
	const int a[] = { 100, 5, 3, -30 };
	printf("%f\n", 関数(a, sizeof a / sizeof * a));
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14253085774
匿名希望さん

2021/11/27 0:08

2回答

整数型配列の先頭アドレスと、配列の大きさ（要素の数）を受け取り、配列のなかのデータの最大値と最小値を求め、その平均値（最大値と最小値の平均値）を返す関数を作成せよ。
但し、main関数では、適当なデータを初期化で代入し、関数を呼び出した後に平均値を出力せよ。また、関数内では、ポインタのインクリメントを繰り返す方法を用い、添え字は用いないこと。



教えてほしいです

C言語関連・26閲覧
*/
