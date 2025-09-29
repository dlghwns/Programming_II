//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment08.c
//날짜 : 2025-09-26

/* 파일명: PAssignment08.c

 * 내용: 상품 가격이 저장된 정수형 배열에 대해서 할인율(%)/를 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
 * 상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다.
 * 할인된 가격은 별도의 배열에 저장해야한다.
 * 작성자: 이호준

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : cal()
 * 기능(책임) : 상품 가격과 할인율을 입력받아 할인된 가격을 계산한다.
 * 반환 : 할인된 가격
 */
int cal(int price, int discount)
{
	return price - (price * discount / 100);
}


/*
* 함수명 : solve()
* 기능(책임) : 상픔가와 할인율을 입력받아 할인된 가격을 계산한다.
* 반환 : 없음
*/
void solve()
{
	int price[5];
	int discount;

	printf("상품가 5개를 입력하세요 : ");
	scanf("%d %d %d %d %d", &price[0], &price[1], &price[2], &price[3], &price[4]);

	printf("할인율(%)? ");
	scanf("%d", &discount);

	for (int i = 0; i < 5; i++)
	{
		printf("가격 : %d --> 할인가:  %d\n", price[i], cal(price[i], discount));
	}

}


int main()
{
	solve();
	return 0;
}