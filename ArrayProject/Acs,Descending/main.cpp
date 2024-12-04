#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Min -100.0
#define Max 100.0
#define SIZE 10

// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    
    return;
}

//무작위로 생성되는 숫자들을 나타내기 위한 함수
void PrintArray(double *Array, int size)
{
    for (int i = 0; i < size;i++)
    {
        printf("%.1lf ", Array[i]);
    }
    printf("\n");

    return;
}

//버블정렬알고리즘을 활용, 0과 1 옵션을 추가해 각 상황별 오름차순과 내림차순 구별
void CalcSortArray(double *Array, int Size, int Choose)
{
    double temp = 0;

    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size - 1; j++)
        {
            if ((Choose == 0 && Array[j] > Array[j + 1]) || (Choose == 1) && Array[j] < Array[j + 1])
            {
                temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    double Array[SIZE];
    GenRandSeed();

    for (int i = 0; i < SIZE; i++)
    {
        Array[i] = ((rand() / (double)RAND_MAX) * (Max - Min) + Min);
    }

    printf("Generated Number : ");
    PrintArray(Array, SIZE);

    CalcSortArray(Array, SIZE, 0);
    printf("Ascending Number : ");
    PrintArray(Array, SIZE);

    CalcSortArray(Array, SIZE, 1);
    printf("Descending Number : ");
    PrintArray(Array, SIZE);

    return 0;
}

