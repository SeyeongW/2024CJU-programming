#include <stdio.h>

int main()
{
	float dia, pie, area, vol;

	pie = 3.14;

	printf("���� ������ : ");
	scanf_s("%f", &dia);
	area = pie * dia * dia;
	printf("���� ���� : %f\n", area);
	printf("������ : ");
	scanf_s("%f", &dia);
	area = 4 * pie * dia * dia;
	vol = (4 / 3) * pie * dia * dia;
	printf("���� �ѳ��� : %.2f\n", area);
	printf("���� ���� : %.2f\n", vol);

	float Rside, height, Rarea;

	printf("�簢�� �غ� : ");
	scanf_s("%f", &Rside);
	printf("�簢�� ���� : ");
	scanf_s("%f", &height);
	Rarea = Rside * height;
	printf("�簢�� ���� : %.1f\n", Rarea);

	float Tside, he, Tarea;

	printf("�ﰢ���� �غ� : ");
	scanf_s("%f", &Tside);
	printf("�ﰢ���� ���� : ");
	scanf_s("%f", &he);

	Tarea = 0.5 * Tside * he;
	printf("�ﰢ�� ���� : %.2f", Tarea);


	return 0;
}