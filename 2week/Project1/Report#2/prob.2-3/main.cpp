#include <stdio.h>

int main()
{
	double grade = 0; //변수 선언 및 초기화

	printf("Enter grade : "); //입력받을 문구 출력
	scanf_s("%lf", &grade);

	if (grade >= 90) //입력받은 값 90 이상시 A 출력
	{
		printf("Grade is A\n");
	}
	else if (grade >= 80) //값이 80 이상시 B출력
	{
		printf("Grade is B\n");
	}
	else if (grade >= 70) //값이 70 이상시 C출력
	{
		printf("Grade is C\n");
	}
	else if (grade >= 60) //값이 60 이상시 D출력
	{
		printf("Grade is D\n");
	}
	else //아무것도 포함되지 않으면 F출력
	{
		printf("Grade is F\n");
	}

	printf("Enter grade : "); //입력받을 문구 출력 //깃헙 업로드 오류로 switch문 결합
	scanf_s("%lf", &grade);

	int ResGrade = 0; //switch문에 쓰일 정수형 변수선언
	ResGrade = grade / 10; //10의 자리로 변환하여 점수구간으로 분류
	switch (ResGrade)
	{
	case 10: //10일때, 9로 이동
	case 9: //9일때 A출력
		printf("Grade is A");
		break;

	case 8: //8일때 B출력
		printf("Grade is B");
		break;

	case 7: //7일때 C출력
		printf("Grade is C");
		break;

	case 6: // 6일때 D 출력
		printf("Grade is D");
		break;

	default: //해당되지 않는 구간에 대해 F출력
		printf("Grade is F");
		break;
	}
	return 0;
}