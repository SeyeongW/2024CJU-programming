#include <stdio.h>
#include <math.h>

double rad(double angle) //라디안값으로 변환하는 함수
{
	return angle * (3.14 / 180);
}
double SIN(double angle) //sin값으로 나타내는 함수
{
	return sin(rad(angle));
}
double COS(double angle) //cos값으로 나타내는 함수
{
	return cos(rad(angle));
}

int main()
{
	double angle;

	printf("Enter an degree : ");
	scanf_s("%lf", &angle); //입력받은 각도를 변수에 저장
	printf("sin is %.2lf\n", SIN(angle)); //sin값 출력
	printf("cos is  %.2lf", COS(angle)); //cos값 출력

	return 0;
}