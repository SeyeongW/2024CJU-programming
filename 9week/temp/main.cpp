#include <stdio.h>

float CtoF(float c) //화씨 변환식
{
	return(c * 1.8) + 32;
}
float FtoC(float f) //섭씨 변환식
{
	return(f / 1.8) - 32;
}

int main()
{
	float tem;
	int ch;

	printf("enter temperature : ");
	scanf_s("%f", &tem); //입력받은 온도를 변수에 저장
	printf("C to F : 0, F to C: 1\n"); //해당 온도를 바꿀 온도단위 선택옵션
	printf("type the option : "); 
	scanf_s("%d", &ch); //입력한 옵션식에 맞게 변수에 저장

	if (ch == 0) //입력받은 값이 0일 경우에 화씨로 변환
	{
		printf("%.1fC is %.1fF", tem, CtoF(tem));
	}
	else //그 외에 경우에 섭씨로 변환
	{
		printf("%.1fF is %.1fC", tem, FtoC(tem));
	}
	return 0;
}