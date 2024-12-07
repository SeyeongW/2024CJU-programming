#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define Max 100 // ���� ���� ����
#define Pick 10

int GenRandomNumber(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

//�л� ���
double CalcluateVarience(int *RandomNumber, int count, double Mean)
{
    double Varience = 0.0;
    double Dev = 0.0;
    double DevSqr = 0.0;
    double DevSqrSum = 0.0;

    for (int i = 0; i < count; i++)
    {
        Dev = RandomNumber[i] - Mean;
        DevSqr = pow(Dev, 2);
        DevSqrSum += DevSqr;
    }

   return  Varience = DevSqrSum / count;
}

//ǥ������ ���
double CalculateStdDev(double StdDev, double Varience)
{
    return  StdDev = sqrt(Varience);
}

int main()
{
    int FirstRange = 0, SecondRange = 0;
    int MinRange = 0, MaxRange = 0;
    int RandomNumber[Max], PickNumber[Pick];
    double Sum = 0, Mean = 0, Varience = 0, StdDev = 0;
   
    // ���� ������ �ʱ�ȭ
    srand((unsigned int)time(NULL));

    // ���� ����
    printf("Set the range (minimum to maximum): ");
    scanf_s("%d %d", &FirstRange, &SecondRange);

    // ���� ����
    if (FirstRange > SecondRange)
    {
        MaxRange = FirstRange; // FirstRange�� �� ũ�� �ִ밪
        MinRange = SecondRange; // SecondRange�� �ּҰ�
    }
    if (SecondRange > FirstRange)
    {
        MaxRange = SecondRange; // SecondRange�� �� ũ�� �ִ밪
        MinRange = FirstRange; // FirstRange�� �ּҰ�
    }
    if (FirstRange == SecondRange)
    {
        printf("Invalid range! Minimum and maximum cannot be the same.\n");
        return 1; // �����ϸ� ���� ó��
    }

    // ���� ���� �� ���
    printf("Generated random numbers\n");
    for (int i = 0; i < Max; i++)
    {
        RandomNumber[i] = GenRandomNumber(MinRange, MaxRange);
        printf("%4d", RandomNumber[i]);
        if ((i+1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
    
    //������ ���� 100�� �� 10�� ���
    printf("Pick %dnumbers\n", Pick);
    for (int i = 0; i < Pick; i++)
    {
        int Array = rand() % Max;
        PickNumber[i] = RandomNumber[Array];
        printf("%4d", PickNumber[i]);
        if ((i+1) % 5 == 0)
            printf("\n");
        Sum += PickNumber[i];
    }
    printf("\n");

    Mean = Sum / Pick;
    Varience = CalcluateVarience(PickNumber, Pick, Mean);
    StdDev = CalculateStdDev(StdDev, Varience);

    //������� ���
    printf("Total Sum : %.3lf\n", Sum);
    printf("Mean is %.3lf\n", Mean);
    printf("Varience is %.3lf\n", Varience);
    printf("Standard Deviation is %.3lf\n", StdDev);

    return 0;
}
