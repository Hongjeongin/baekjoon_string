/*
날짜 : 2021-01-19
이름 : 홍정인
제목 : ASCII 코드값
설명 : 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램
*/

#include <stdio.h>

int main(void) {
	char ch;

	printf("무엇이든 한 글자만 입력해주세요(ex. A) : ");
	scanf("%c", &ch);

	printf("%d\n", ch);

	return 0;
}