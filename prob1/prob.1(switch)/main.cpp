#include <stdio.h>

int main()
{
	int num = 0; //변수 설정 및 초기화

	printf("enter an integer : "); //입력문구 출력
	scanf_s("%d", &num);

	switch (num % 2) //짝수, 홀수 판별식 입력
	{
	case 0: //나머지가 0일 경우, 짝수로 출력
		printf("%d is even nuber", num);
		break;

	case 1: //나머지가 1일 경우, 홀수로 출력
		printf("%d is odd number", num);
		break;
	}

	return 0;
}