#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//�ջ� ���
int CalculateSum(int* Array, int Size)
{
    int Sum = 0;
    for (int i = 0; i < Size; i++)
    {
        Sum += Array[i];
    }
    return Sum;
}
//��� ���
double CalculateMean(int Sum, int Size)
{
    double Mean = 0;
    return Mean = Sum / Size;
}
//�л� ���
double CalcluateVarience(int* Array, int Size, double Mean)
{
    double Varience = 0;
    for (int i = 0; i < Size; i++)
    {
        Varience += pow(Array[i]-Mean, 2);
    }
    return Varience / Size;
}

//ǥ������ ���
double CalculateStdDev(double Varience)
{
    return sqrt(Varience);
}

int main()
{
    int* Array;
    int Size = 0, SecondSize = 0;

    printf("�ʱ� �迭 ũ�� �Է� : ");
    scanf_s("%d", &Size);
    //�����޸� �Ҵ�
    Array = (int*)malloc(Size * sizeof(int));
    if (Array == NULL)
    {
        printf("run out of memory\n");
        return 1;
    }

    printf("%d���� ������ �Է��ϼ��� : ", Size);
    for (int i = 0; i < Size; i++)
    {
        scanf_s("%d", &Array[i]);
    }
    
    int Sum = CalculateSum(Array, Size);
    double Mean = CalculateMean(Sum, Size);
    double Varience = CalcluateVarience(Array, Size, Mean);
    double StdDev = CalculateStdDev(Varience);

    printf("�ջ� : %d\n", Sum);
    printf("��� : %.2lf\n", Mean);
    printf("�л� : %.2lf\n", Varience);
    printf("ǥ������ : %.2lf\n", StdDev);

    printf("�߰����� �迭 ũ�� �Է� : ");
    scanf_s("%d", &SecondSize);
    //�߰� �迭 ũ�� ������
    Array = (int*)realloc(Array, (Size + SecondSize) * sizeof(int));
    if (Array == NULL)
    {
        printf("run out of memory");
        return 1;
    }
    printf("%d���� �� �Է� : ", SecondSize);
    for (int i = Size; i < Size + SecondSize; i++)
    {
        scanf_s("%d", &Array[i]);
    }

    int Total = Size + SecondSize;
    Sum = CalculateSum(Array, Total);
    Mean = CalculateMean(Sum, Total);
    Varience = CalcluateVarience(Array, Total, Mean);
    StdDev = CalculateStdDev(Varience);

    printf("�ջ� : %d\n", Sum);
    printf("��� : %.2lf\n", Mean);
    printf("�л� : %.2lf\n", Varience);
    printf("ǥ������ : %.2lf\n", StdDev);

    return 0;
}
