//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment05.c
//날짜 : 2025-09-26

/* 파일명: Assignment05.c

 * 내용: 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든 원소를 출력하는 프로그램을 작성하시오.
 * 실수형 배열은 크기가 10이고 값은 마음대로 지정해서 사용한다.
 * 작성자: 이호준

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) :  실수형 배열의 모든 원소를 출력해줌
 * 반환 : 없음
 */
void solve()
{
	double arr[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	double* prt = arr;

	for (int i = 0; i < 10; i++)
	{
		printf("%.2f ", *(prt + i));
	}
}


int main()
{
	solve();
	return 0;
}