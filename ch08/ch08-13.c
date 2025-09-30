//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-13.c
//날짜 : 2025-09-26
#include <stdio.h>
void swap(int* x, int* y);

int ex08_13(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
};

int main()
{
	ex08_13();
	return 0;
}