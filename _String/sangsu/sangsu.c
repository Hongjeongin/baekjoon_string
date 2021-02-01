#include <stdio.h>
#include <string.h>

int main(void) {

	int length, n1 = 0, n2 = 0, j = 3;
	char num1[4];
	char num2[4];
	char temp[4];

	length =
		scanf("%s", num1);
	scanf("%s", num2);

	for (int i = 0; i < length; i++, j--) {
		temp[i] = num1[j];
	}
	strcpy(num1, temp);
	for (int i = 0; i < length; i++, j--) {
		temp[i] = num[j];
	}
	strcpy(num2, temp)

		return 0;
}