#include <stdio.h>

int main(void)

{

	char ch;
	
	printf("�빮�ڳ� �ҹ��ڸ� �Է����ּ��� : ") ;
	scanf("%c",&ch);

	int ch2 = (int)ch;

	if (ch >= 65 && ch <= 90)

	{

		printf("�Է��Ͻ� ���ڴ� �빮���Դϴ�\n");
		printf("�ҹ��� : %c\n", (char)ch2+32);

	}

	else if (ch >= 97 && ch <= 122) {

		printf("�Է��Ͻ� ���ڴ� �ҹ����Դϴ�\n");
		printf("�빮�� : %c\n", (char)ch2-32);

	}

	else {

		printf("�߸��Է��ϼ̽��ϴ�\n");

		if (ch2 >= 21 && ch2 <= 47 || ch2 >= 58 && ch2 <= 63 || ch2 >= 91 && ch2 <= 96 || ch2 >= 123 && ch2 <= 127)

		{

			printf("���� : Ư�����ڸ� �Է��ϼ̽��ϴ�.\n");

		}

		else {

			printf("���� : ���ڸ� �Է��ϼ̽��ϴ�.\n");

		}

	}

 

	return 0;

}
