/*
��¥ : 2021-01-19
�̸� : ȫ����
���� : ���ĺ� ã��
���� : ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.
		������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
		���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷�
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int num;
	char s[101];
	int alphabet[26];

	for (int i = 0; i < sizeof(alphabet) / sizeof(int); i++) {
		alphabet[i] = -1;
	}

	printf("�ܾ� �Է� : ");
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		num = s[i] - 97;
		if (alphabet[num] == -1)
			alphabet[num] = i;
	}
	for (int i = 0; i < sizeof(alphabet) / sizeof(int); i++) {
		printf("%c : %d\n", 97 + i, alphabet[i]);
	}

	return 0;
}