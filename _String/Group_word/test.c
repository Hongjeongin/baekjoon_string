/*
��¥ : 2021-02-02
�̸� : ȫ����
���� : �׷� �ܾ� üĿ
���� : �׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
 -- �ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷� --
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int n, wordSize, count = 0, preCount = 0, alphaCount = 0;
	char post, pre;
	char input[24] = "";
	char word[101];

	printf("�Է��� �ܾ� ������ �Է����ּ��� : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d��° �ܾ� : ", i + 1);
		scanf("%s", &word);
		wordSize = strlen(word);

		for (int j = 0; j < wordSize; j++) {
			post = word[j];
			if (j != 0) {
				pre = word[j - 1];
				if (post != pre) {
					for (int k = 0; k < alphaCount; k++) {
						if (word[j] == input[k]) {
							preCount = 1;
							break;
						}
					}
					input[alphaCount] = pre;
					alphaCount++;
				}
			}
		}
		if (preCount != 1) {
			count++;
		}
		preCount = 0;
		alphaCount = 0;
		strcpy(input, "");
	}

	printf("�Է��Ͻ� �ܾ� �߿��� �׷� �ܾ�� %d�� �Դϴ�.\n", count);

	return 0;
}