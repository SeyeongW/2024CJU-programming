#include <stdio.h>
#include <math.h>

double rad(double angle) //���Ȱ����� ��ȯ�ϴ� �Լ�
{
	return angle * (3.14 / 180);
}
double SIN(double angle) //sin������ ��Ÿ���� �Լ�
{
	return sin(rad(angle));
}
double COS(double angle) //cos������ ��Ÿ���� �Լ�
{
	return cos(rad(angle));
}

int main()
{
	double angle;

	printf("Enter an degree : ");
	scanf_s("%lf", &angle); //�Է¹��� ������ ������ ����
	printf("sin is %.2lf\n", SIN(angle)); //sin�� ���
	printf("cos is  %.2lf", COS(angle)); //cos�� ���

	return 0;
}