#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	char cl;

	printf("��Ģ���� �Է�(����) : ");
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
		printf("�����Դϴ�\n");

	}
	return 0;
}