//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-10.c
//날짜 : 2025-09-26
#include <stdio.h>

int ex08_10(void)
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5];
	int* p = x;		
	int i;

	for (i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n");

	p = y;		
	for (i = 0; i < 5; i++)
		p[i] = x[i];

	for (i = 0; i < 5; i++, p++)
		printf("%d ", *p);
	printf("\n");

	return 0;
}


int main()
{
	ex08_10();
	return 0;
}