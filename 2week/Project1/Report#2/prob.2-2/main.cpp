#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0; //�� ���� ���� �� �ʱ�ȭ

	printf("enter two integer : "); //�Է¹��� ������ ���� ���� ���
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0) //���� ù��° ������ �ι�° ������ ���� �������� 0�� ���
	{
		printf("%d is a multiple of %d\n", num1, num2); //"ù��° ������ �ι�° ������ ����Դϴ�" ���
	}
	else //�������� 0�� �ƴҰ��
	{
		printf("%d isn't a multiple of %d\n", num1, num2); //"ù��° ������ �ι�° ������ ����� �ƴմϴ�" ���
	}
	

	printf("enter two integer : "); //�Է¹��� �� ������ ���� ���� ���, ���� ���ε� ������ ���� switch�� ����
	scanf_s("%d %d", &num1, &num2); //������ ����

	switch (num1 % num2 == 0) //ù��° ������ �ι�° ������ ���� �������� 0
	{
	case 0: //���ǽ��� ������ ���
		printf("%d isn't a multiple of %d", num1, num2); //����� �ƴ��� ���
		break; //Ż��

	case 1: //���ǽ��� ���� ���
		printf("%d is a multiple of %d", num1, num2); //������� ���
		break; //Ż��
	}

	return 0;
}