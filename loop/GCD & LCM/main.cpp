#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int big = 0, small = 0, GCD = 0, re = 0, LCM = 0; //ū ���� ������, �ִ������� �ּҰ����, ������ ���� ����


	printf("Enter two number : ");
	scanf_s("%d %d", &num1, &num2);

	if(num1>num2) //�Է¹��� ���� ũ�⿡ �°� ū���� ������ �з�
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}

	re = big % small; //�������� ���� ���� ����

	while (1) //��Ŭ���� ȣ����� �°� ���� ������ ���Ŀ� �ٸ� ������ ����, �������� 0�� �ɶ����� ���ѹݺ�
	{
		big = small;
		small = re;
		re = big % small;
		if (re == 0) break;
	}
	GCD = small;
	printf("GCD is %d\n", GCD);

	LCM = (num1 * num2) / GCD;
	printf("LCM is %d", LCM);

	return 0;
}