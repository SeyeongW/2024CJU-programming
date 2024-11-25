#include <stdio.h>

int main()
{
	int Count = 0;
	char FirstSentense[80];
	

	printf("enter your sentence : ");
	gets_s(FirstSentense, sizeof(FirstSentense));

	for(int i=0; FirstSentense[i]!='\0'; i++)
	{
		if ((FirstSentense[i] >= 'A') && (FirstSentense[i] <= 'Z'))
		{
			FirstSentense[i] = FirstSentense[i] + 32;
			Count++;
		}
	}
	printf("Converted sentense : ");
	puts(FirstSentense);
	printf("Converted count : %d\n", Count);

	return 0;
}