#include <stdio.h>

int main() 
{
    double angle = 0; // ������ ���� ���� �� �ʱ�ȭ
    double res = 0; // ����� ���� ���� �� �ʱ�ȭ

    printf("angle : "); //������ �Է�
    scanf_s("%lf", &angle); 

    res = ((int)angle + 180) % 360 - 180; //�Է¹��� �������� -180~+180[deg]�� ��ȯ�ϱ� ���� ���� ����

    printf("converted posture : %.3lf\n", res);  //��ȯ�� �ڼ����� ���� ����� ���

    return 0;
}
