#include <stdio.h>
void main() {

	int i = 0, sum = 0, n = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d" , &n); //n�� ���� �Է¹ޱ�

	while (i < n) {

		i = i + 1;
		sum = sum + i;

	}
	printf("��: %d \n", sum);

}