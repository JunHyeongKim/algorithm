#include <stdio.h>
int main() {

	int i = 0, sum = 0, n = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d" , &n);

	for (i = 1; i <= n; i++) {

		sum+=i;

}

	printf("�� : %d", sum);
	return 0;

}