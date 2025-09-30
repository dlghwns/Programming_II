//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-04.c
//날짜 : 2025-09-26

#include <stdio.h>

void test1(int x)
{
	x = 20;
}

void test2(int* p)
{
	*p = 20;
}

int main()
{
	int x = 10;
	test1(x);
	printf("test1 호출 후 x = %d\n", x);

	test2(&x);
	printf("test2 호출 후 x = %d\n", x);

	return 0;
}