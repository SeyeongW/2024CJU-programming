#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    char temp[80];

    printf("두 문자열 입력: ");
    //scanf_s 사용으로 각 문자열 크기 계산
    scanf_s("%s", str1, (unsigned int)sizeof(str1));
    scanf_s("%s", str2, (unsigned int)sizeof(str2));

    printf("바꾸기 전: %s, %s\n", str1, str2);

    //문자열 크기 계산
    strcpy_s(temp, sizeof(temp), str1);
    strcpy_s(str1, sizeof(str1), str2);
    strcpy_s(str2, sizeof(str2), temp);

    printf("바꾼 후: %s, %s\n", str1, str2);

    return 0;
}
