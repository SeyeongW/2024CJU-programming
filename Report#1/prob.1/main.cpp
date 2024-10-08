#include <stdio.h>

int main() 
{
    double angle = 0; // 각도값 변수 설정 후 초기화
    double res = 0; // 결과값 변수 설정 후 초기화

    printf("angle : "); //각도값 입력
    scanf_s("%lf", &angle); 

    res = ((int)angle + 180) % 360 - 180; //입력받은 각도값을 -180~+180[deg]로 변환하기 위한 수식 설정

    printf("converted posture : %.3lf\n", res);  //변환된 자세값에 대한 결과값 출력

    return 0;
}
