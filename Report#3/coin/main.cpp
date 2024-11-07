#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Set the coin's heads, tails, and the number of attempts
#define CF 1
#define CB 2
#define CoinFwdBwd 3
#define NumFlip 1000

void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
unsigned int GenRandFlipCoin(unsigned int nRange)
{
    unsigned int nRes = 0;
    unsigned int nNum = rand();
    while (1)
    {
            nRes = ((unsigned int)(rand()) % (nRange));
            if ((nRes == CF) || (nRes == CB))
            break;
    }
    
    return nRes;
}

int main()
{
    GenRandSeed();

    int NumSumBackwardFlip = 0;
    int NumSumForwardFlip = 0;
   

    //Repeat the loop for the specified number of attempts
    for (unsigned int i = 0; i <= NumFlip; i++)
    {
        unsigned int CStatus = GenRandFlipCoin(CoinFwdBwd);

        switch (CStatus)
        {
        case CF:
            NumSumForwardFlip++;
            break;

        case CB:
            NumSumBackwardFlip++;
            break;
        }
    }

    //print output based on the calculated
    printf("summation Result = (FWD, BWD) : (%d,%d)\n", NumSumForwardFlip, NumSumBackwardFlip);
    printf("Probability : (FWD, BWD) (%.3lf, %.3lf)", (double)NumSumForwardFlip / NumFlip, (double)NumSumBackwardFlip / NumFlip);
    return 0;

}