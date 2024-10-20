#include <stdio.h>

int main()
{
	int num = 0; //변수 선언 및 초기화
	int num1 = 0; //변수 설정 및 초기화

	printf("enter an integer : "); //입력받을 문구 출력
	scanf_s("%d", &num);

	if (num % 2 == 0) //입력받은 값을 2로 나눈 나머지가 0일 경우, 짝수로 출력
	{
		printf("%d is even number", num);
	}
	else //0이 아닌경우, 홀수로 출력
	{
		printf("%d is odd number\n", num);
	}

	printf("enter an integer : "); //입력문구 출력, 파일 갯수 문제로 깃헙 업로드 불가하여 2번문제 결합
	scanf_s("%d", &num1);

	switch (num1 % 2) //짝수, 홀수 판별식 입력
	{
	case 0: //나머지가 0일 경우, 짝수로 출력
		printf("%d is even nuber", num1);
		break;

	case 1: //나머지가 1일 경우, 홀수로 출력
		printf("%d is odd number", num1);
		break;
	}

	return 0;
}