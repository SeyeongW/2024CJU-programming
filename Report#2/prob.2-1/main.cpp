#include <stdio.h>

int main()
{
	int num = 0; //���� ���� �� �ʱ�ȭ
	int num1 = 0; //���� ���� �� �ʱ�ȭ

	printf("enter an integer : "); //�Է¹��� ���� ���
	scanf_s("%d", &num);

	if (num % 2 == 0) //�Է¹��� ���� 2�� ���� �������� 0�� ���, ¦���� ���
	{
		printf("%d is even number", num);
	}
	else //0�� �ƴѰ��, Ȧ���� ���
	{
		printf("%d is odd number\n", num);
	}

	printf("enter an integer : "); //�Է¹��� ���, ���� ���� ������ ���� ���ε� �Ұ��Ͽ� 2������ ����
	scanf_s("%d", &num1);

	switch (num1 % 2) //¦��, Ȧ�� �Ǻ��� �Է�
	{
	case 0: //�������� 0�� ���, ¦���� ���
		printf("%d is even nuber", num1);
		break;

	case 1: //�������� 1�� ���, Ȧ���� ���
		printf("%d is odd number", num1);
		break;
	}

	return 0;
}