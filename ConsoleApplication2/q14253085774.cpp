#include <stdlib.h>
double �֐�
( const int* a //�����^�z��̐擪�A�h���X
, size_t     n //�z��̑傫���i�v�f�̐��j
)
{
	if (n) {
		int �ő�l = *a;
		int �ŏ��l = *a;
		const int* const end = a + n;
		while (++a < end) {
			if (*a > �ő�l) �ő�l = *a;
			if (*a < �ŏ��l) �ŏ��l = *a;
		}
		return
			( �ő�l
			+ �ŏ��l
			) / 2.;
	}
	else
		exit(EXIT_FAILURE);
}
#include <stdio.h>
int main()
{
	const int a[] = { 100, 5, 3, -30 };
	printf("%f\n", �֐�(a, sizeof a / sizeof * a));
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14253085774
������]����

2021/11/27 0:08

2��

�����^�z��̐擪�A�h���X�ƁA�z��̑傫���i�v�f�̐��j���󂯎��A�z��̂Ȃ��̃f�[�^�̍ő�l�ƍŏ��l�����߁A���̕��ϒl�i�ő�l�ƍŏ��l�̕��ϒl�j��Ԃ��֐����쐬����B
�A���Amain�֐��ł́A�K���ȃf�[�^���������ő�����A�֐����Ăяo������ɕ��ϒl���o�͂���B�܂��A�֐����ł́A�|�C���^�̃C���N�������g���J��Ԃ����@��p���A�Y�����͗p���Ȃ����ƁB



�����Ăق����ł�

C����֘A�E26�{��
*/
