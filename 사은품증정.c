#include <stdio.h>

int main()

{

	int month = 0;

	

	printf("��︮�� ������ �´� ����ǰ �����մϴ�.\n���డ�� ���� �� : ");

	scanf_s("%d",&month);

 

	switch (month)

	{

	case 12:

	case 1:

	case 2:

		printf("�ܿ￡ ��︮�� ���÷� �帳�ϴ�.\n");

		break;

	case 3:

	case 4:

	case 5:

		printf("���� ��︮�� Ȳ�縶��ũ�� �帳�ϴ�.\n");

		break;

	case 6:

	case 7:

	case 8:

		printf("������ ��︮�� �����ġ�ฦ �帳�ϴ�.\n");

		break;

	case 9:

	case 10:

	case 11:

		printf("������ ��︮�� ���۶󽺸� �帳�ϴ�.\n");

		break;

	default:

		printf("�������� �ʴ� �� �Դϴ�.\n");

	}

 

	return 0;

}
