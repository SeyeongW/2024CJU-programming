#include <stdio.h>
#include <string.h>

//�ܾ� ��ġ �ٲٴ� �Լ�
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

//���ڿ��� ������ �Լ�
void ReverseString(char* String)
{
	char* Start = String; //�������� String�� ù��° �迭�� ����
	char* Count = String; //���ڿ��� Ž���ϴ� �κ��� String�� ù��° �迭�� ����

	while (*Count!='\0') //���ڿ��� NULL���� �ƴҵ���
	{
		if (*Count == ' ') //���ڿ��� ������⸦ ������ ��
		{
			Swap(Start, Count - 1); //�ܾ� �ٲ�
			Start = Count + 1; 
		}
		Count++; //���ڿ� Ž������ ����
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