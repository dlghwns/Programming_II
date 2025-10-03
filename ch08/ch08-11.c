//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-11.c
//날짜 : 2025-09-26

#include <stdio.h>


/*
 * 함수명 : ex08_11
 * 기능(책임) : 포인터 배열을 이용해 출력
 * 반환 : 0
 */
int ex08_11(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };	
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);
	}
	printf("\n");

	return 0;
}
int main()
{
	ex08_11();
	return 0;
}