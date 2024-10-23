#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int big = 0, small = 0, GCD = 0, re = 0, LCM = 0;


	printf("Enter two number : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}

	re = big % small; //while문과 동일하게 수식 설정
	do
	{
		big = small;
		small = re;
		re = big % small;
	} while (re == 0); //나머지가 0이 될때까지 반복하도록 설정

	GCD = small;
	printf("GCD is %d\n",GCD);

	LCM = (num1 * num2) / GCD;
	printf("LCM is %d",LCM);

	return 0;
}