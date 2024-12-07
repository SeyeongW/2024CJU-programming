#include <stdio.h>

// 내적(Dot Product)을 계산하는 함수
double DotProduct(double* FirstVector, double* SecondVector)
{
    return FirstVector[0] * SecondVector[0] +
        FirstVector[1] * SecondVector[1] +
        FirstVector[2] * SecondVector[2];
}

// 외적(Cross Product)을 계산하는 함수
void CrossProduct(double* FirstVector, double* SecondVector, double* Result)
{
    Result[0] = FirstVector[1] * SecondVector[2] - FirstVector[2] * SecondVector[1];
    Result[1] = FirstVector[2] * SecondVector[0] - FirstVector[0] * SecondVector[2];
    Result[2] = FirstVector[0] * SecondVector[1] - FirstVector[1] * SecondVector[0];
}

int main()
{
    // 벡터와 결과를 저장할 배열
    double FirstVector[3], SecondVector[3]; // 입력 벡터
    double CrossProductResult[3];          // 외적 결과
    double dotproduct;                     // 내적 결과

    // 첫 번째 벡터 입력받기
    printf("First vector(x, y, z) : ");
    scanf_s("%lf %lf %lf", &FirstVector[0], &FirstVector[1], &FirstVector[2]);

    // 두 번째 벡터 입력받기
    printf("Second vector(x, y, z) : ");
    scanf_s("%lf %lf %lf", &SecondVector[0], &SecondVector[1], &SecondVector[2]);

    // 내적 계산 후 출력
    dotproduct = DotProduct(FirstVector, SecondVector);
    printf("Calculate dot product: %.2lf\n", dotproduct);

    // 외적 계산 후 출력
    CrossProduct(FirstVector, SecondVector, CrossProductResult);
    printf("Calculate cross product : (%.2lf)i + (%.2lf)j + (%.2lf)k\n",
        CrossProductResult[0], CrossProductResult[1], CrossProductResult[2]);

    return 0;
}
