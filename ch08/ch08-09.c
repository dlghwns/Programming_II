
//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-09.c
//날짜 : 2025-09-26

#include <stdio.h>

int ex08_09(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;	// 배열의 이름, 배열의 시작 주소, &arr[0]은 모두 같다.
	int i;

	for (i = 0; i < 5; i++)
		printf("p[%d] = %d\n", i, p[i]);		// p를 배열 이름인 것처럼 사용한다.
	return 0;
}

int main()
{
	ex08_09();
	return 0;
}