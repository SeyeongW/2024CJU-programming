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
		switch (num) //�Է¹��� ���ڰ� 2~9������ ���� ��, �� ���ڿ� �´� ������ ���
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

		default: //2���� 9������ ���ڰ� �ƴ� �ٸ��� �ԷµǸ� �ѹ��� ���
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