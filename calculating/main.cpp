#include <stdio.h>

int main()
{
	char ca;
	int a = 0;
	int b = 0;

	printf("사칙연산 입력(정수) : ");
	scanf_s("%d %c %d", &a, &ca, sizeof(ca), &b);

	if (ca == '+')
	{
		printf("%d %c %d = %d\n", a, ca, b, a+b);
	}
	else if (ca == '-')
	{
		printf("%d %c %d = %d\n", a, ca, b, a-b);
	}
	else if (ca == '/')
	{
		printf("%d %c %d = %d\n", a, ca, b, a / b);
	}
	else if (ca == '*')
	{
		printf("%d %c %d = %d\n", a, ca, b, a*b);
	}
	else
	{
		printf("오류\n");
	}

	return 0;
}