#include <stdio.h>
void main() {

	int i = 0, sum = 0, n = 0;

	printf("n�� ���� �Է� �ϼ��� : ");
	scanf("%d", &n);

	while (i < n) {

		i = i + 1;

		if (i % 2 == 0) {

			sum = sum + i;
		}
	}

	printf("�� : %d \n", sum);

}