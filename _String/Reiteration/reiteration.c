/*
��¥ : 2020-01-19
�̸� : ȫ����
���� : ���ڿ� ��ȯ ���α׷�
���� : ���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷�
		S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int count;
	char **str;
	char ch;
	char st[21];

	printf("�� �� �ϽǷ��� : ");
	scanf("%d", &count);
	getchar();
	str = (char**)malloc(sizeof(char*) * count);
	for (int i = 0; i < count; i++) {
		str[i] = (char*)malloc(sizeof(char) * 22);
	}
	for (int i = 0; i < count; i++) {
		printf("�ݺ��� ���� ���ڿ��� �Է����ּ���(ex. 3 hello) : ");
		scanf("%c %s", &ch, st);
		getchar();
		sprintf(str[i], "%c%s", ch, st);
	}

	for (int i = 0; i < count; i++) {
		printf("��ȯ�� %d��° ���ڿ� : ", i + 1);
		for (int j = 1; j < strlen(str[i]); j++) {
			for (int k = 0; k < str[i][0] - 48; k++) {
				printf("%c", str[i][j]);
			}
		}
		printf("\n");
	}

	for (int i = 0; i < count; i++) {
		free(str[i]);
	}

	free(str);

	return 0;
}