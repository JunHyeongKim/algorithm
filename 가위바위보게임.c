#include <stdio.h>

int main()
{
	int p1;
	int p2;

	printf("���������� ����\n");
	printf("����: 0\n");
	printf("����: 1\n");
	printf("��: 2\n");

	printf("player1�� 0,1,2�� �ϳ��� �Է����ּ���: ");
	scanf("%d", &p1);

	printf("player2�� 0,1,2�� �ϳ��� �Է����ּ���: ");
	scanf("%d", &p2);

	if (p1 == 0)
		if (p2 == 0)
			printf("���º�\n");

	if (p1 == 0)
		if (p2 == 1)
			printf("player2�� �¸�\n");

	if (p1 == 0)
		if (p2 == 2)
			printf("player1�� �¸�\n");

	if (p1 == 1)
		if (p2 == 0)
			printf("player2�� �¸�\n");

	if (p1 == 1)
		if (p2 == 1)
			printf("���º�\n");

	if (p1 == 1)
		if (p2 == 2)
			printf("player2�� �¸�\n");

	if (p1 == 2)
		if (p2 == 1)
			printf("player2�� �¸�\n");

	if (p1 == 2)
		if (p2 == 2)
			printf("���º�\n");

	return 0;
}