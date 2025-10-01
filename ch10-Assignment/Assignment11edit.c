//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment11.c
//날짜 : 2025-10-01
//별3


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct PRODUCT
{
	char name[100];
	int price;
	int stock;
};

struct PRODUCT product[3] = {
	{"아메리카노", 4000, 10},
	{"카페라떼", 4500, 10},
	{"플랫화이트", 5000, 10}
};

void solve()
{
	int run = 1;

	char order[100];
	int count;

	while (run)
	{
		printf("주문할 제품명? ");
		scanf("%s", &order);

		if(strcmp(order, ".") == 0)
		{
			break;
		} //종료체크

		if ((strcmp(order, "아메리카노") == 0 || strcmp(order, "카페라떼") == 0 || strcmp(order, "플랫화이트") == 0) == 0)
		{
			printf("없는 메뉴\n");
			continue;
		} //메뉴체크
		

		printf("주문할 수량? ");
		scanf("%d", &count);
		if (count > 10)
		{
			printf("재고 부족\n");
			continue;
		} //재고체크

		int total_price = 0;
		int left_stock = 0;

		//아메리카노 게산
		if (strcmp(order, "아메리카노") == 0)
		{
			total_price = count * product[0].price;
			left_stock = 10 - count;
		}
		//카페라떼 계산
		else if (strcmp(order, "카페라떼") == 0)
		{
			total_price = count * product[1].price;
			left_stock = 10 - count;
		}
		//플랫화이트 계산
		else if (strcmp(order, "플랫화이트") == 0)
		{
			total_price = count * product[2].price;
			left_stock = 10 - count;
		}

		//출력
		printf("결제 금액: %d  %s 재고 : %d\n", total_price, order, left_stock);
	}


	for (int i = 0; i < 3; i++)
	{
		printf("%s %d원 재고:%d\n", product[i].name, product[i].price, product[i].stock);

	}
}

int main()
{
	solve();
	return 0;
}