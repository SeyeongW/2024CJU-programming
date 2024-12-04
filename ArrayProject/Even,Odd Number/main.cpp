#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Min 0
#define Max 100
#define SIZE 10
#define Unused -1

// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));

    return;
}

//무작위로 생성되는 숫자들을 나타내기 위한 함수
void PrintArray(int *Array, int size)
{
    for (int i = 0; i < size;i++)
    {
        //Unusde일 경우 X표시
        if (Array[i] == Unused)
        {
            printf("X ");
        }
        else
            printf("%d ", Array[i]);
    }
    printf("\n");

    return;
}

//홀,짝 구별 함수
void CalcEvenOddArray(int *Array, int size, int *Even, int* EvenCount, int *Odd, int* OddCount)
{
    for (int i = 0; i < size; i++)
    {
        if (Array[i] % 2 == 0)
        {
            Even[*EvenCount] = Array[i];
            (*EvenCount)++;
        }
        else
        {
            Odd[*OddCount] = Array[i];
            (*OddCount)++;
        }
    }
    //비어있는 공간 -1을 활용하여 비어있는 공간 확인
    for (int i = *EvenCount; i < size; i++)
    {
        Even[i] = Unused;
    }
    for (int i = *OddCount; i < size; i++)
    {
        Odd[i] = Unused;
    }

    return;
}

int main()
{
    int Array[SIZE], Even[SIZE], Odd[SIZE];
    int EvenCount = 0, OddCount = 0;

    GenRandSeed();

    for (int i = 0; i < SIZE; i++)
    {
        Array[i] = rand() % (Max - Min + 1) + Min;
    }

    printf("Generated Number : ");
    PrintArray(Array, SIZE);

    CalcEvenOddArray(Array, SIZE, Even, &EvenCount, Odd, &OddCount);
    printf("Even Number : ");
    PrintArray(Even, SIZE);
    printf("Odd Number : ");
    PrintArray(Odd, SIZE);

 
    return 0;
}

