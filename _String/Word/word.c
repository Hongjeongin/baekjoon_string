/*
��¥ : 2021-01-20
�̸� : ȫ����
���� : ���� ���� ���� ���ĺ� ã��
���� : ���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷�
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int max = 0;
	int length = 0;
	int alphabet[100] = { 0 };
	char mostFreq;
	char word[1000001];

	printf("�ܾ� �Է� : ");
	scanf("%s", word);
	length = strlen(word);

	for (int i = 0; i < length; i++) {
		for (int j = 65; j < 91; j++)
			if (word[i] == j || word[i] == j + 32)
				alphabet[j]++;
	}

	for (int i = 65; i < 91; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			mostFreq = i;
		}
		else if (max == alphabet[i]) {
			mostFreq = '?';
		}
	}

	printf("���� ���� ���� ���ĺ� : %c\n", mostFreq);

	return 0;
}