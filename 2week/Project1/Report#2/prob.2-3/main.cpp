#include <stdio.h>

int main()
{
	double grade = 0; //���� ���� �� �ʱ�ȭ

	printf("Enter grade : "); //�Է¹��� ���� ���
	scanf_s("%lf", &grade);

	if (grade >= 90) //�Է¹��� �� 90 �̻�� A ���
	{
		printf("Grade is A\n");
	}
	else if (grade >= 80) //���� 80 �̻�� B���
	{
		printf("Grade is B\n");
	}
	else if (grade >= 70) //���� 70 �̻�� C���
	{
		printf("Grade is C\n");
	}
	else if (grade >= 60) //���� 60 �̻�� D���
	{
		printf("Grade is D\n");
	}
	else //�ƹ��͵� ���Ե��� ������ F���
	{
		printf("Grade is F\n");
	}

	printf("Enter grade : "); //�Է¹��� ���� ��� //���� ���ε� ������ switch�� ����
	scanf_s("%lf", &grade);

	int ResGrade = 0; //switch���� ���� ������ ��������
	ResGrade = grade / 10; //10�� �ڸ��� ��ȯ�Ͽ� ������������ �з�
	switch (ResGrade)
	{
	case 10: //10�϶�, 9�� �̵�
	case 9: //9�϶� A���
		printf("Grade is A");
		break;

	case 8: //8�϶� B���
		printf("Grade is B");
		break;

	case 7: //7�϶� C���
		printf("Grade is C");
		break;

	case 6: // 6�϶� D ���
		printf("Grade is D");
		break;

	default: //�ش���� �ʴ� ������ ���� F���
		printf("Grade is F");
		break;
	}
	return 0;
}