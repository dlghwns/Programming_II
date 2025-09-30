//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-08.c
//날짜 : 2025-09-26


#include <stdio.h>

int ex08_08(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p= %p, ", p);
		printf("*p = %d\n", *p);
	}

	return 0;
}

int main()
{
	ex08_08();
	return 0;
}