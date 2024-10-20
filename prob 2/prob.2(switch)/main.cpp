#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0; //변수 선언 후 초기화

	printf("enter two integer : "); //입력받을 두 정수에 대한 문구 출력
	scanf_s("%d %d", &num1, &num2); //변수에 저장

	switch (num1 % num2 == 0) //첫번째 정수를 두번째 정수로 나눈 나머지가 0
	{
	case 0: //조건식이 거짓인 경우
		printf("%d isn't a multiple of %d", num1, num2); //배수가 아님을 출력
		break; //탈출

	case 1: //조건식이 참일 경우
		printf("%d is a multiple of %d", num1, num2); //배수임을 출력
		break; //탈출
	}

	return 0;
}