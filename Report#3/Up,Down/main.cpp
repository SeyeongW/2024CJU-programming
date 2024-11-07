#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Set the range from 1 to 100 and the number of attempts.
#define MaxAttempts 10
#define min 1
#define max 100


// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
unsigned int Answer()
{
    unsigned int Res = 0;
    unsigned int nNum = rand();
    Res = ((unsigned int)(nNum) % (max - min + 1) + min);
    return Res;
}

int main(void)
{
    unsigned int GuessNum = 0;
    unsigned int Secret = 0;
    unsigned int Attempt = 0;

    // assigning seed
    GenRandSeed();
    Secret = Answer();

    //Create the loop that run fo 10 attempts
    while (Attempt < MaxAttempts)
    {
        printf("Guess the answer! : ");
        scanf_s("%d", &GuessNum);

        if (GuessNum == Secret)
        {
            printf("What a luck! Congraturation. The answer was %d", Secret);
            break;
        }
        else if (GuessNum < Secret)
        {
            printf("Up! The answer is higher.\n");
        }
        else
        {
            printf("Down! The answer is lower.\n");
        }

        printf("Remaining Try : %d/%d\n", Attempt + 1, MaxAttempts);

        Attempt++;
    }

    //Print a message for a failed guessing
    if (Attempt == MaxAttempts && GuessNum != Secret)
    {
        printf("You fail... The anser was %d\n", Secret);
    }

    return 0;
}
