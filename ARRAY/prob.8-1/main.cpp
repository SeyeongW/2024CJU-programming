#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    char temp[80];

    printf("�� ���ڿ� �Է�: ");
    //scanf_s ������� �� ���ڿ� ũ�� ���
    scanf_s("%s", str1, (unsigned int)sizeof(str1));
    scanf_s("%s", str2, (unsigned int)sizeof(str2));

    printf("�ٲٱ� ��: %s, %s\n", str1, str2);

    //���ڿ� ũ�� ���
    strcpy_s(temp, sizeof(temp), str1);
    strcpy_s(str1, sizeof(str1), str2);
    strcpy_s(str2, sizeof(str2), temp);

    printf("�ٲ� ��: %s, %s\n", str1, str2);

    return 0;
}
