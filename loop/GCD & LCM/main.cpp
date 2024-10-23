#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int big = 0, small = 0, GCD = 0, re = 0, LCM = 0; //큰 수와 작은수, 최대공약수와 최소공배수, 나머지 변수 선언


	printf("Enter two number : ");
	scanf_s("%d %d", &num1, &num2);

	if(num1>num2) //입력받은 수의 크기에 맞게 큰수와 작은수 분류
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}

	re = big % small; //나머지에 대한 수식 설정

	while (1) //유클리드 호재법에 맞게 먼저 설정한 수식에 다른 수들을 대입, 나머지가 0이 될때까지 무한반복
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