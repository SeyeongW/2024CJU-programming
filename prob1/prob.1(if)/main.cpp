#include <stdio.h>

int main()
{
	int num = 0; //���� ���� �� �ʱ�ȭ

	printf("enter an integer : "); //�Է¹��� ���� ���
	scanf_s("%d", &num);

	if (num % 2 == 0) //�Է¹��� ���� 2�� ���� �������� 0�� ���, ¦���� ���
	{
		printf("%d is even number", num);
	}
	else //0�� �ƴѰ��, Ȧ���� ���
	{
		printf("%d is odd number", num);
	}

	return 0;
}