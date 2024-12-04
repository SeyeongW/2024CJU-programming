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
    srand(time(NULL));

    return;
}

//무작위로 생성되는 숫자들을 나타내기 위한 함수
void PrintArray(double Array[], int size)
{
    for (int i = 0; i < size;i++)
    {
        printf("%.1lf ", Array[i]);
    }
    printf("\n");

    return;
}

//역순계산 함수
void CalcnverseArray(double Array[], double Reversed[], int size)
{
    for (int i = 0;i < size;i++)
    {
        Reversed[i] = Array[size - 1 - i]; 
    }
}

int main()
{
    double Array[SIZE];
    double Reversed[SIZE];

    GenRandSeed;

    for (int i = 0; i < SIZE; i++)
    {
        Array[i] = ((rand() / (double)RAND_MAX) * (Max - Min) + Min);
    }

    printf("Generated Number : ");
    PrintArray(Array, SIZE);

    CalcnverseArray(Array, Reversed, SIZE);
    printf("Reversed Number : ");
    PrintArray(Reversed, SIZE);

    return 0;
}

