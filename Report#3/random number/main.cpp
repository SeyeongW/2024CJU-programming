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

    //평균,분산,표준편차 계산에 필요한 변수 설정
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

    //지정한 횟수만큼 정수를 출력시키고 그 수들을 합산
    for (int i = 0; i < NumberOfTime; i++)
    {
        RandomNumber[i] = GenRandNum(min,max); //출력받을 무작위의 수를 범위 1~100까지로 지정
        printf("%d ", RandomNumber[i]);
        Sum += RandomNumber[i];
    }

       //평균값 계산
       Mean = Sum / NumberOfTime;

       //분산을 계산하기 위한 편차 계산
    for (int i = 0; i < NumberOfTime; i++)
    {
        Dev = RandomNumber[i] - Mean;
        DevSqr = pow(Dev, 2);
        DevSqrSum += DevSqr;
    }
    
    //앞에서 계산한 수치들을 대입하여 분산 및 표준편차 계산
    Varience = DevSqrSum / NumberOfTime;
    StdDev = sqrt(Varience);

    //순서대로 출력
    printf("\n");
    printf("Total Sum : %.3lf\n", Sum);
    printf("Mean is %.3lf\n", Mean);
    printf("Varience is %.3lf\n", Varience);
    printf("Standard Deviation is %.3lf", StdDev);

    return 0;
}


