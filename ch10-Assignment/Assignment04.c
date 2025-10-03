//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment04.c
//날짜 : 2025-10-01
//별1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct DATE
{
	int y;
	int m;
	int d;
};

/*
 * 함수명 : print_date()
 * 기능(책임) : 연, 월, 일을 입력받아 DATE 구조체에 저장하고 "연/월/일" 형식으로 출력
 * 반환 : 없음
 */
void print_date()
{
	struct DATE date;

	printf("연? : ");
	scanf("%d", &date.y);
	printf("월? : ");
	scanf("%d", &date.m);
	printf("일? : ");
	scanf("%d", &date.d);

	printf("%d/%d/%d", date.y, date.m, date.d);
}

int main()
{
	print_date();
	return 0;
}