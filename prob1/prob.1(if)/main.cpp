#include <stdio.h>

int main()
{
	int num = 0; //변수 선언 및 초기화

	printf("enter an integer : "); //입력받을 문구 출력
	scanf_s("%d", &num);

	if (num % 2 == 0) //입력받은 값을 2로 나눈 나머지가 0일 경우, 짝수로 출력
	{
		printf("%d is even number", num);
	}
	else //0이 아닌경우, 홀수로 출력
	{
		printf("%d is odd number", num);
	}

	return 0;
}