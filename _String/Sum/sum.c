/*
��¥ : 2021-01-19
�̸� : ȫ����
���� : �� ���ϱ�
���� : N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {

	int n;
	int sum = 0;
	char *number;

	printf("�ڸ��� �Է� : ");
	scanf("%d", &n);

	number = (char*)malloc((sizeof(char) * n) + 1);

	printf("���� �Է� : ");
	scanf("%s", number);

	for (int i = 0; i < n; i++) {
		sum += (number[i] - 48);
	}

	printf("�� ���� %d�Դϴ�.\n", sum);
	free(number);

	return 0;
}