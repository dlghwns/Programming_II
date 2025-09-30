//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-14.c
//날짜 : 2025-09-26
#include <stdio.h>
void get_sum_product(int x, int y, int* sum, int* product);

int ex08_14(void)
{
	int result1, result2;

	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

void get_sum_product(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}

int main()
{
	ex08_14();
	return 0;
}