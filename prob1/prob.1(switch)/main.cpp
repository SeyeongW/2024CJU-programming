#include <stdio.h>

int main()
{
	int num = 0; //���� ���� �� �ʱ�ȭ

	printf("enter an integer : "); //�Է¹��� ���
	scanf_s("%d", &num);

	switch (num % 2) //¦��, Ȧ�� �Ǻ��� �Է�
	{
	case 0: //�������� 0�� ���, ¦���� ���
		printf("%d is even nuber", num);
		break;

	case 1: //�������� 1�� ���, Ȧ���� ���
		printf("%d is odd number", num);
		break;
	}

	return 0;
}