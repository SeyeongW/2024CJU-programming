#include <stdio.h>

float CtoF(float c) //ȭ�� ��ȯ��
{
	return(c * 1.8) + 32;
}
float FtoC(float f) //���� ��ȯ��
{
	return(f / 1.8) - 32;
}

int main()
{
	float tem;
	int ch;

	printf("enter temperature : ");
	scanf_s("%f", &tem); //�Է¹��� �µ��� ������ ����
	printf("C to F : 0, F to C: 1\n"); //�ش� �µ��� �ٲ� �µ����� ���ÿɼ�
	printf("type the option : "); 
	scanf_s("%d", &ch); //�Է��� �ɼǽĿ� �°� ������ ����

	if (ch == 0) //�Է¹��� ���� 0�� ��쿡 ȭ���� ��ȯ
	{
		printf("%.1fC is %.1fF", tem, CtoF(tem));
	}
	else //�� �ܿ� ��쿡 ������ ��ȯ
	{
		printf("%.1fF is %.1fC", tem, FtoC(tem));
	}
	return 0;
}