//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment01.c
//날짜 : 2025-09-26



/* 파일명: Assignment01.c

 * 내용: 크기가 3인 double 형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하시오.
 * 단 주소 구하기 연산자를 사용하지 마시오
 * 작성자: 이호준

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 크기가 3인 double 형 배열의 모든 원소의 인덱스와 그 인덱스에 맞는 주소를 출력해준다.
 * 반환 : 없음
 */
void solve()
{
	double arr[3];
	double* p = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("x[%i]의 주소 : %x\n", i, p + i);
	}

}


int main()
{
	solve();
	return 0;
}