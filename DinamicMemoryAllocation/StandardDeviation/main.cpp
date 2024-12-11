#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//합산 계산
int CalculateSum(int* Array, int Size)
{
    int Sum = 0;
    for (int i = 0; i < Size; i++)
    {
        Sum += Array[i];
    }
    return Sum;
}
//평균 계산
double CalculateMean(int Sum, int Size)
{
    double Mean = 0;
    return Mean = Sum / Size;
}
//분산 계산
double CalcluateVarience(int* Array, int Size, double Mean)
{
    double Varience = 0;
    for (int i = 0; i < Size; i++)
    {
        Varience += pow(Array[i]-Mean, 2);
    }
    return Varience / Size;
}

//표준편차 계산
double CalculateStdDev(double Varience)
{
    return sqrt(Varience);
}

int main()
{
    int* Array;
    int Size = 0, SecondSize = 0;

    printf("초기 배열 크기 입력 : ");
    scanf_s("%d", &Size);
    //동적메모리 할당
    Array = (int*)malloc(Size * sizeof(int));
    if (Array == NULL)
    {
        printf("run out of memory\n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요 : ", Size);
    for (int i = 0; i < Size; i++)
    {
        scanf_s("%d", &Array[i]);
    }
    
    int Sum = CalculateSum(Array, Size);
    double Mean = CalculateMean(Sum, Size);
    double Varience = CalcluateVarience(Array, Size, Mean);
    double StdDev = CalculateStdDev(Varience);

    printf("합산 : %d\n", Sum);
    printf("평균 : %.2lf\n", Mean);
    printf("분산 : %.2lf\n", Varience);
    printf("표준편차 : %.2lf\n", StdDev);

    printf("추가적인 배열 크기 입력 : ");
    scanf_s("%d", &SecondSize);
    //추가 배열 크기 재조정
    Array = (int*)realloc(Array, (Size + SecondSize) * sizeof(int));
    if (Array == NULL)
    {
        printf("run out of memory");
        return 1;
    }
    printf("%d개의 값 입력 : ", SecondSize);
    for (int i = Size; i < Size + SecondSize; i++)
    {
        scanf_s("%d", &Array[i]);
    }

    int Total = Size + SecondSize;
    Sum = CalculateSum(Array, Total);
    Mean = CalculateMean(Sum, Total);
    Varience = CalcluateVarience(Array, Total, Mean);
    StdDev = CalculateStdDev(Varience);

    printf("합산 : %d\n", Sum);
    printf("평균 : %.2lf\n", Mean);
    printf("분산 : %.2lf\n", Varience);
    printf("표준편차 : %.2lf\n", StdDev);

    return 0;
}
