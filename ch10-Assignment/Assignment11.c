//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment11.c
//날짜 : 2025-10-01
//별3


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct PRODUCT
{
	char name[100];
	int price;
	int stock;
}product;


void solve()
{

	product p[3] = {
		{"아메리카노", 4000, 10},
		{"카페라떼", 4500, 10},
		{"플랫화이트", 5000, 10}
	};



	char order[100];
	int count;

	while(1)
	{

		printf("주문할 제품명? ");
		scanf("%s", order);

		if(strcmp(order, ".") == 0)
		{
			break;
		} //종료체크

		int num = 0;


		if (strcmp(order, "아메리카노") == 0)
		{
			num = 0;
		}
		else if (strcmp(order, "카페라떼") == 0)
		{
			num = 1;
		}
		else if (strcmp(order, "플랫화이트") == 0)
		{
			num = 2;
		}
		else
		{
			printf("없는 메뉴\n");
			continue;
		} //메뉴체크
		

		printf("주문할 수량? ");
		scanf("%d", &count);
		if ((p[num].stock - count) < 0)
		{
			printf("재고 부족\n");
			continue;
		}
		else
		{
			p[num].stock -= count;
		} //재고계산
		

		//출력
		printf("결제 금액: %d  %s 재고 : %d\n", (count * p[num].price), order, p[num].stock);
	}


	for (int i = 0; i < 3; i++)
	{
		printf("%s %d원 재고:%d\n", p[i].name, p[i].price, p[i].stock);

	}
}

int main()
{
	solve();
	return 0;
}