//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment11.c
//날짜 : 2025-09-26

/* 파일명: Assignment11.c

 * 내용: 직사각형의 넓이와 둘레는 구하는 get_rect_info 함수를 작성하시오.
 * 직사각형의 가로, 세로의 길이를 입력받응ㄴ 다음 get_rect_info 함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는
 * 프로그램을 작성하시오.

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int w, int h, int *parea, int *pperi)
{
	*parea = (w) * (h);
	*pperi = 2 * ((w) + (h));
}

void solve()
{
	int area;
	int peri;

	int w, h;

	printf("가로? ");
	scanf("%d", &w);
	printf("세로? ");
	scanf("%d", &h);

	get_rect_info(w, h, &area, &peri);
	printf("넓이: %d\n", area);
	printf("둘레: %d\n", peri);
}

int main()
{
	solve();

	return 0;
}