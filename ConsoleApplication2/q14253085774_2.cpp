#include <stdlib.h>
#include <stdio.h>
double 関数
( const int* a // 整数型配列の先頭アドレス
, size_t     n // 配列の大きさ（要素の数）
)
{
	if (n == 0) {
		//n は 0
		fprintf(stderr, "配列の大きさが 0 のため、最大値・最小値を求めることが出来ませんでした。\n");
		exit(EXIT_FAILURE);
	}
	else {
		//n は非 0
		int 最大値 = *a;
		int 最小値 = *a;
		for (;;) {
			--n;
			if (n == 0)
				return (最大値 + 最小値) / 2.;
			else {
				++a;
				if (*a > 最大値) 最大値 = *a;
				if (*a < 最小値) 最小値 = *a;
			}
		}
	}
}
/*
関数を作成せよ。
main関数では、適当なデータを初期化で代入し、
関数を呼び出した後に平均値を出力せよ。
また、関数内では、ポインタのインクリメントを繰り返す方法を用い、添え字は用いないこと。
*/
int main()
{
	const int a[] = { 100, 200, 500, -300, 900, 0 };
	//     _countof(a) が使えない場合は sizeof a / sizeof *a とする

	// printf "%f"  は double 型用
	// printf "%lf" は double 型用 (C99 から)以前は間違い
	// scanf  "%f"  は float  型用
	// scanf  "%lf" は double 型用
	printf("%f\n", 関数(a, _countof(a)));
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
