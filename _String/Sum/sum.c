/*
날짜 : 2021-01-19
이름 : 홍정인
제목 : 합 구하기
설명 : N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램
*/

#include <stdio.h>

int main(void) {

	int n;
	int sum = 0;
	char *number;

	printf("자릿수 입력 : ");
	scanf("%d", &n);

	number = (char*)malloc((sizeof(char) * n) + 1);

	printf("정수 입력 : ");
	scanf("%s", number);

	for (int i = 0; i < n; i++) {
		sum += (number[i] - 48);
	}

	printf("총 합은 %d입니다.\n", sum);
	free(number);

	return 0;
}