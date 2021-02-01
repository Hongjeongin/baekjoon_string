/*
날짜 : 2021-01-20
이름 : 홍정인
제목 : 가장 많이 쓰인 알파벳 찾기
설명 : 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int max = 0;
	int length = 0;
	int alphabet[100] = { 0 };
	char mostFreq;
	char word[1000001];

	printf("단어 입력 : ");
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

	printf("가장 많이 쓰인 알파벳 : %c\n", mostFreq);

	return 0;
}