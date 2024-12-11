#include <stdio.h>
#include <string.h>

//단어 위치 바꾸는 함수
void Swap(char* Start, char *End)
{
	int temp;

	while (Start < End)
	{
		temp = *Start;
		*Start = *End;
		*End = temp;

		Start++;
		End--;
	}


}

//문자열을 뒤집는 함수
void ReverseString(char* String)
{
	char* Start = String; //시작점을 String의 첫번째 배열로 설정
	char* Count = String; //문자열을 탐색하는 부분을 String의 첫번째 배열로 설정

	while (*Count!='\0') //문자열이 NULL문자 아닐동안
	{
		if (*Count == ' ') //문자열이 띄워쓰기를 만났을 때
		{
			Swap(Start, Count - 1); //단어 바꿈
			Start = Count + 1; 
		}
		Count++; //문자열 탐색구간 증가
	}
	Swap(Start, Count - 1);
}

int main()
{
	char Input[100];

	printf("Enter a string : ");
	fgets(Input, sizeof(Input), stdin);

	printf("Before removing newline : \"%s\"\n", Input);

	Input[strcspn(Input, "\n")] = '\0';

	printf("After removing newling : \"%s\"\n", Input);

	ReverseString(Input);
	printf("Reverse string : %s", Input);

	return 0;
}