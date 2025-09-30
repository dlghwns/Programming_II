//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-02.c
//날짜 : 2025-09-26

#include <stdio.h>

int ex08_02()
{
	int* p2 = (int*)0x123456789;

	int a = 10;
	int* p3 = &a;

	int* p4 = 0;
	int* p5 = NULL;

	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p5 = %p\n", p5);

	return 0;
}

int main()
{
	ex08_02();
	return 0;
}