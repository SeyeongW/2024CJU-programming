#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	char cl;

	printf("사칙연산 입력(정수) : ");
	scanf_s("%d%c%d", &a, &cl, sizeof(cl), &b);

	switch (cl)
	{
	case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
	
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;

	case '*':
		printf("%d - %d = %d\n", a, b, a* b);
		break;

	case'/':
		printf("%d / %d = %d\n", a, b, a / b);
		break;

	default:
		printf("오류입니다\n");

	}
	return 0;
}