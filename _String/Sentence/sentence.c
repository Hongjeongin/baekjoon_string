/*
��¥ : 2021-01-20
�̸� : ȫ����
���� : �ܾ��� ����
���� : ���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷�
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int count = 1, length;
	char str[1000001];

	printf("������ �Է� : ");
	fgets(str, sizeof(str), stdin);
	length = strlen(str);

	for (int i = 0; i < length - 1; i++) {
		if (str[i] == 32)
			count++;
	}

	if (str[0] == 32)
		count--;
	if (str[length - 2] == 32)
		count--;

	printf("�ش� ������ %d���� �ܾ�� �̷���� �ֽ��ϴ�.\n", count);

	return 0;
}