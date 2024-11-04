#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RockPaperScissors 3
#define Rock 0
#define Paper 1
#define Scissors 2
#define InitStatus 100
#define EndCond 999

// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
    unsigned int nRes = 0;
    unsigned int nNum = rand();
    nRes = ((unsigned int)(nNum) % (nRange));
    return nRes;
}

int main(void)
{
    // assigning seed
    GenRandSeed();

    unsigned int nComRps = InitStatus;
    unsigned int nPlayerRps = InitStatus;

    while (1)
    {
        printf("Input YOur Status(Rock;0, paper:1, Scissors:2) : \n");
        printf("if you wnat to end the loop, please input 999\n");
        scanf_s("%d", &nPlayerRps);

        if (nPlayerRps == EndCond)
        {
            printf("end of infinite while loop RPS game...\n");
            break;
        }
        else if ((nPlayerRps < 0) || (nPlayerRps > RockPaperScissors))
        {
            printf("check your input condition\n");
            continue;
        }

        unsigned int nComRps = GenRandNum(RockPaperScissors);
        printf("(Player, Computer):(%d, %d)\n", nPlayerRps, nComRps);

        if (nPlayerRps == nComRps)
        {
            printf("tie\n");
        }
        else if (nPlayerRps == 0)
        {
            switch (nComRps)
            {
            case 1:
                printf("You lose\n");
                break;

            case 2:
                printf("You win\n");
                break;
            }
        }
        else if (nPlayerRps == 1)
        {
            switch (nComRps)
            {
            case 0:
                printf("You win\n");
                break;

            case 2:
                printf("You lose\n");
                break;
            }
        }
        else
        {
            switch (nComRps)
            {
            case 0:
                printf("You lose\n");
                break;

            case 1:
                printf("You win\n");
                break;
            }
        }
    }

   
    return 0;
}