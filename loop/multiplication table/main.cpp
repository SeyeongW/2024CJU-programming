#include <stdio.h>

int main()
{
	int num = 0;
	int i;
	int j = 0;
	int all = 0;

	printf("Entet Number : ");
	scanf_s("%d", &num);

	for (i = num; i<=num; i++)
	{
		switch (num) //입력받은 숫자가 2~9사이의 수일 때, 각 숫자에 맞는 구구단 출력
		{
		case 2:
			for (j = 1; j <= 9; j++)
			printf("%d*%d=%d\n", i, j, i * j);
			break;

		case 3:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;
			
		case 4:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;

		case 5:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;

		case 6:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;

		case 7:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;

		case 8:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;
			
		case 9:
			for (j = 1; j <= 9; j++)
				printf("%d*%d=%d\n", i, j, i * j);
			break;

		default: //2부터 9사이의 숫자가 아닌 다른게 입력되면 한번에 출력
			for (i = 2; i <= 9; i++)
			{
				for (j = 1; j <= 9; j++)
				{
					printf("%d*%d=%d\n", i, j, i * j);
				}
			}

		}
		
	}
	
	return 0;
}