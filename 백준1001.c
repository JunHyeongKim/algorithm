#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a = 0, b = 0; //��������

	scanf("%d", &a); //�� �� A�� B�� �Է�
	scanf("%d", &b);

	printf("%d", a - b); //A-B�� ���

	return 0;
}