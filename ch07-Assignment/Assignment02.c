//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment02.c
//날짜 : 2025-09-26

/* 파일명: Assignment02.c

 * 내용:등비수열은 앞의 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다.
  크기가 10인 실수형 배열에 대하여 등비수열로 값을 채우려고 한다.
  첫 번째 항의 값과 공비(common ratio)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
 * 작성자: 이호준

 * 날짜: 2025-09-26

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 첫째항과 공비를 입력받아 10개의 항을 구하고 배열에 넣어 배열을 출력해준다.
 * 반환 : 없음
 */
int solve()
{
	int a[10];
	int first;
	int common_ratio;

	printf("첫째 항?");
	scanf("%d", &first);

	printf("공비?");
	scanf("%d", &common_ratio);

	a[0] = first;
	printf("등비수열 : %d  ", a[0]);
	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] * common_ratio;
		printf("%d  ", a[i]);
	}

}


int main()
{
	solve();
	return 0;
}