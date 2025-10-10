//학번: 202511229
//이름: 이호준
//프로그램 명 : ch10-10.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int x, y;		// 점의 좌표
} POINT;

void print_point_2(POINT* pt);

/*
* 함수명 : ex10_10
* 기능(책임) : 구조체주소전달방법
* 반환 : 0
*/
int ex10_10(void)
{
	POINT arr[] = {
		{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point_2(&arr[i]);	// 구조체 변수의 주소를 전달한다. 
		printf(" ");
	}
	printf("\n");

	return 0;
}

/*
* 함수명 : print_point_2
* 기능(책임) : 전달받은 값을 출력
* 반환 : 0
*/
void print_point_2(POINT* pt)		// 포인터에 의한 전달
{
	printf("(%d, %d)", pt->x, pt->y);
}


int main()
{
	ex10_10();
	return 0;
}