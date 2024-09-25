#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	double in;
	double mt;
	double ft;
	double sl = 0;
	double Kg = 0;

	printf("inch : ");
	scanf_s("%lf", &in);

	printf("feet : ");
	scanf_s("%lf", &ft);

	printf("kg to slug : ");
	scanf_s("%lf", &Kg);

	printf("inch to meter : %.3lf\n", 0.025 * in);
	printf("feet to meter : %.3lf\n", 0.3 * ft);
	printf("slug : %.3lf", 14.59 * Kg);

	return 0;
}