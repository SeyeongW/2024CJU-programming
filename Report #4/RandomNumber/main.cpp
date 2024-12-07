#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define Max 100 // 난수 생성 개수
#define Pick 10

int GenRandomNumber(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

//분산 계산
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

//표준편차 계산
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
   
    // 난수 생성기 초기화
    srand((unsigned int)time(NULL));

    // 범위 설정
    printf("Set the range (minimum to maximum): ");
    scanf_s("%d %d", &FirstRange, &SecondRange);

    // 범위 정리
    if (FirstRange > SecondRange)
    {
        MaxRange = FirstRange; // FirstRange가 더 크면 최대값
        MinRange = SecondRange; // SecondRange가 최소값
    }
    if (SecondRange > FirstRange)
    {
        MaxRange = SecondRange; // SecondRange가 더 크면 최대값
        MinRange = FirstRange; // FirstRange가 최소값
    }
    if (FirstRange == SecondRange)
    {
        printf("Invalid range! Minimum and maximum cannot be the same.\n");
        return 1; // 동일하면 오류 처리
    }

    // 난수 생성 및 출력
    printf("Generated random numbers\n");
    for (int i = 0; i < Max; i++)
    {
        RandomNumber[i] = GenRandomNumber(MinRange, MaxRange);
        printf("%4d", RandomNumber[i]);
        if ((i+1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
    
    //생성된 난수 100개 중 10개 출력
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

    //순서대로 출력
    printf("Total Sum : %.3lf\n", Sum);
    printf("Mean is %.3lf\n", Mean);
    printf("Varience is %.3lf\n", Varience);
    printf("Standard Deviation is %.3lf\n", StdDev);

    return 0;
}
