/*
날짜 : 2021-01-20
이름 : 홍정인
제목 : 단어의 개수
설명 : 영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int count = 1, length;
	char str[1000001];

	printf("문장을 입력 : ");
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

	printf("해당 문장은 %d개의 단어로 이루어져 있습니다.\n", count);

	return 0;
}