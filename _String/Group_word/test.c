/*
날짜 : 2021-02-02
이름 : 홍정인
제목 : 그룹 단어 체커
설명 : 그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
 -- 단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램 --
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int n, wordSize, count = 0, preCount = 0, alphaCount = 0;
	char post, pre;
	char input[24] = "";
	char word[101];

	printf("입력할 단어 개수를 입력해주세요 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 단어 : ", i + 1);
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

	printf("입력하신 단어 중에서 그룹 단어는 %d개 입니다.\n", count);

	return 0;
}