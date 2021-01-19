/*
날짜 : 2020-01-19
이름 : 홍정인
제목 : 문자열 변환 프로그램
설명 : 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램
		S의 길이는 적어도 1이며, 20글자를 넘지 않는다.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int count;
	char **str;
	char ch;
	char st[21];

	printf("몇 번 하실래요 : ");
	scanf("%d", &count);
	getchar();
	str = (char**)malloc(sizeof(char*) * count);
	for (int i = 0; i < count; i++) {
		str[i] = (char*)malloc(sizeof(char) * 22);
	}
	for (int i = 0; i < count; i++) {
		printf("반복할 수와 문자열을 입력해주세요(ex. 3 hello) : ");
		scanf("%c %s", &ch, st);
		getchar();
		sprintf(str[i], "%c%s", ch, st);
	}

	for (int i = 0; i < count; i++) {
		printf("변환된 %d번째 문자열 : ", i + 1);
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