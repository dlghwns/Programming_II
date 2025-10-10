//학번: 202511229
//이름: 이호준
//프로그램 명 : ch10-09.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int x, y;	// 점의 좌표
} POINT;

void print_point_1(POINT pt);
/*
* 함수명 : ex10_09
* 기능(책임) : 포인터값으로 전달
* 반환 : 0
*/
int ex10_09(void)
{
	POINT arr[] = {
		{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point_1(arr[i]);	// arr[i]를 pt로 복사해서 전달한다.
		printf(" ");
	}
	printf("\n");

	return 0;
}
/*
* 함수명 : print_point_1
* 기능(책임) : 전달받은 포인터를 출력
* 반환 : 0
*/
void print_point_1(POINT pt)	// 값에 의한 전달
{
	printf("(%d, %d)", pt.x, pt.y);
}


int main()
{
	ex10_09();
	return 0;
}