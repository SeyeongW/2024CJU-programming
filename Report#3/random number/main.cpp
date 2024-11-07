#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NumberOfTime 10
// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
unsigned int GenRandNum(int min, int max)
{
    unsigned int Res = 0;
    unsigned int nNum = rand();
    Res = ((unsigned int)(nNum) % (max-min+1)+min);
    return Res;
}

int main(void)
{
    // assigning seed
    GenRandSeed();

    //���,�л�,ǥ������ ��꿡 �ʿ��� ���� ����
    int min = 0;
    int max = 0;
    int RandomNumber[NumberOfTime];
    double Sum = 0;
    double Mean = 0;
    double Varience = 0;
    double Dev = 0;
    double StdDev = 0;
    double DevSqr = 0;
    double DevSqrSum = 0;

    printf("Set the range = (min:max) : ");
    scanf_s("%d %d", &min, &max);

    if (min > max)
    {
        printf("Check the input value\n");
        exit(1);
    }

    //������ Ƚ����ŭ ������ ��½�Ű�� �� ������ �ջ�
    for (int i = 0; i < NumberOfTime; i++)
    {
        RandomNumber[i] = GenRandNum(min,max); //��¹��� �������� ���� ���� 1~100������ ����
        printf("%d ", RandomNumber[i]);
        Sum += RandomNumber[i];
    }

       //��հ� ���
       Mean = Sum / NumberOfTime;

       //�л��� ����ϱ� ���� ���� ���
    for (int i = 0; i < NumberOfTime; i++)
    {
        Dev = RandomNumber[i] - Mean;
        DevSqr = pow(Dev, 2);
        DevSqrSum += DevSqr;
    }
    
    //�տ��� ����� ��ġ���� �����Ͽ� �л� �� ǥ������ ���
    Varience = DevSqrSum / NumberOfTime;
    StdDev = sqrt(Varience);

    //������� ���
    printf("\n");
    printf("Total Sum : %.3lf\n", Sum);
    printf("Mean is %.3lf\n", Mean);
    printf("Varience is %.3lf\n", Varience);
    printf("Standard Deviation is %.3lf", StdDev);

    return 0;
}


