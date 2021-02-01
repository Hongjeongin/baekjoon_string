/*
날짜 : 2021-02-01
이름 : 홍정인
제목 : 몇 개의 크로아티아 알파벳이 있는가?
설명 : 예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.
dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.
 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
ㅣ크로아티아 변경 알파벳ㅣ
ㅣc=					ㅣ
ㅣc-					ㅣ
ㅣdz=					ㅣ
ㅣd-					ㅣ
ㅣlj					ㅣ
ㅣnj					ㅣ
ㅣs=					ㅣ
ㅣz=					ㅣ
 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/
#include <stdio.h>
#include <string.h>

int main(void) {

	int count = 0, correct = 0, post = 0, length;
	char test[4];
	char word[101];
	char alpha[7][4] = { { "c=" }, { "c-" },  { "d-" },
						{ "lj" }, { "nj" }, { "s=" }, { "z=" } };

	scanf("%s", word);
	length = strlen(word);

	while (length > 0) {
		post = correct;
		switch (length) {

			case 1:
				correct++;
				count++;
				length--;
				break;

			case 2:
				test[0] = word[count];
				test[1] = word[count + 1];
				test[2] = '\0';
				for (int i = 0; i < 7; i++) {
					if (strcmp(test, alpha[i]) == 0) {
						correct++;
						break;
					}
				}
				if (correct == post)
					correct += 2;
				count += 2;
				length -= 2;
				break;

			default:
				test[0] = word[count];
				test[1] = word[count + 1];
				test[2] = word[count + 2];
				test[3] = '\0';
				if (strcmp(test, "dz=") == 0) {
					correct++;
					count += 3;
					length -= 3;
					break;
				}

				test[0] = word[count];
				test[1] = word[count + 1];
				test[2] = '\0';
				for (int i = 0; i < 7; i++) {
					if (strcmp(test, alpha[i]) == 0) {
						correct++;
						count += 2;
						length -= 2;
						break;
					}
				}
				if (correct == post) {
					correct++;
					count++;
					length--;
				}
				break;
		}
	}
	printf("%d\n", correct);

	return 0;
}