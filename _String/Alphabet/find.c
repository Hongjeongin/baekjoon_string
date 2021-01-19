/*
날짜 : 2021-01-19
이름 : 홍정인
제목 : 알파벳 찾기
설명 : 알파벳 소문자로만 이루어진 단어 S가 주어진다.
		각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
		포함되어 있지 않은 경우에는 -1을 출력하는 프로그램
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

	printf("단어 입력 : ");
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