#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0; //두 변수 선언 후 초기화

	printf("enter two integer : "); //입력받을 정수에 대한 문구 출력
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0) //만약 첫번째 정수를 두번째 정수가 나눈 나머지가 0일 경우
	{
		printf("%d is a multiple of %d", num1, num2); //"첫번째 정수는 두번째 정수의 배수입니다" 출력
	}
	else //나머지가 0이 아닐경우
	{
		printf("%d isn't a multiple of %d", num1, num2); //"첫번째 정수는 두번째 정수의 배수가 아닙니다" 출력
	}

	return 0;
}