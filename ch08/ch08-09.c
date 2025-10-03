
//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-09.c
//날짜 : 2025-09-26

#include <stdio.h>
 
/*
 * 함수명 : ex08_09
 * 기능(책임) : 포인터를 배열처럼 사용하기
 * 반환 : 0
 */
int ex08_09(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++)
		printf("p[%d] = %d\n", i, p[i]);		
	return 0;
}

int main()
{
	ex08_09();
	return 0;
}