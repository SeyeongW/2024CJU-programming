#include <stdio.h>

int main()
{
	int W1000 = 0; //1000원 갯수 변수 설정 및 초기화
	int W500 = 0; //500원 갯수 변수 설정 및 초기화
	int W100 = 0; //100원 갯수 변수 설정 및 초기화
	int price = 0; // 물품 금액 변수 설정 및 초기화
	int Imoney = 0; //투입금액 변수 설정 및 초기화
	int Cmoney; //거스름돈 변수 설정 및 초기화

	printf("item price : "); //물품금액 입력
	scanf_s("%d", &price);
	
	printf("Insert money : "); //투입금액 입력
	scanf_s("%d", &Imoney);

	Cmoney = Imoney - price; //거스름돈 계산식 설정
	W1000 = Cmoney / 1000; //거스름돈 1000원 갯수 계산식
	W500 = (Cmoney - 1000 * W1000) / 500; //거스름돈 500원 갯수 계산식
	W100 = (Cmoney - 1000 * W1000 - 500 * W500) / 100; //거스름돈 100원 갯수 계산식

	printf("change : %d\n", Cmoney); //거스름돈 출력
	printf("1000\ : %d\n", W1000); //1000원 갯수 출력
	printf("500\ : %d\n", W500); //500원 갯수 출력
	printf("100\ : %d\n", W100); //100원 갯수 출력

	return 0;
	
}