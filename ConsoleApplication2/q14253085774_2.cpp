#include <stdlib.h>
#include <stdio.h>
double �֐�
( const int* a // �����^�z��̐擪�A�h���X
, size_t     n // �z��̑傫���i�v�f�̐��j
)
{
	if (n == 0) {
		//n �� 0
		fprintf(stderr, "�z��̑傫���� 0 �̂��߁A�ő�l�E�ŏ��l�����߂邱�Ƃ��o���܂���ł����B\n");
		exit(EXIT_FAILURE);
	}
	else {
		//n �͔� 0
		int �ő�l = *a;
		int �ŏ��l = *a;
		for (;;) {
			--n;
			if (n == 0)
				return (�ő�l + �ŏ��l) / 2.;
			else {
				++a;
				if (*a > �ő�l) �ő�l = *a;
				if (*a < �ŏ��l) �ŏ��l = *a;
			}
		}
	}
}
/*
�֐����쐬����B
main�֐��ł́A�K���ȃf�[�^���������ő�����A
�֐����Ăяo������ɕ��ϒl���o�͂���B
�܂��A�֐����ł́A�|�C���^�̃C���N�������g���J��Ԃ����@��p���A�Y�����͗p���Ȃ����ƁB
*/
int main()
{
	const int a[] = { 100, 200, 500, -300, 900, 0 };
	//     _countof(a) ���g���Ȃ��ꍇ�� sizeof a / sizeof *a �Ƃ���

	// printf "%f"  �� double �^�p
	// printf "%lf" �� double �^�p (C99 ����)�ȑO�͊ԈႢ
	// scanf  "%f"  �� float  �^�p
	// scanf  "%lf" �� double �^�p
	printf("%f\n", �֐�(a, _countof(a)));
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
