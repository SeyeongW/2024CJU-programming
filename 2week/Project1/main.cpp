#include <stdio.h>

int main()
{
	float dia, pie, area, vol;

	pie = 3.14;

	printf("원의 반지름 : ");
	scanf_s("%f", &dia);
	area = pie * dia * dia;
	printf("원의 넓이 : %f\n", area);
	printf("반지름 : ");
	scanf_s("%f", &dia);
	area = 4 * pie * dia * dia;
	vol = (4 / 3) * pie * dia * dia;
	printf("구의 겉넓이 : %.2f\n", area);
	printf("구의 부피 : %.2f\n", vol);

	float Rside, height, Rarea;

	printf("사각형 밑변 : ");
	scanf_s("%f", &Rside);
	printf("사각형 높이 : ");
	scanf_s("%f", &height);
	Rarea = Rside * height;
	printf("사각형 넓이 : %.1f\n", Rarea);

	float Tside, he, Tarea;

	printf("삼각형의 밑변 : ");
	scanf_s("%f", &Tside);
	printf("삼각형의 높이 : ");
	scanf_s("%f", &he);

	Tarea = 0.5 * Tside * he;
	printf("삼각형 넓이 : %.2f", Tarea);


	return 0;
}