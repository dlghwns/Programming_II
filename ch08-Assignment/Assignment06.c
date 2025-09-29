//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment06.c
//날짜 : 2025-09-26


/* 파일명: Assignment06.c

 * 내용: 정수형 배열에 대해서 배열의 원소 중 최대값과 최솟값을 찾는 get_min_max() 함수를 정의하시오.
 * 크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최댓값과 최솟값을 찾아서 출력하시오.
 * 작성자: 이호준

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : get_min_max()
 * 기능(책임) : 배열과 최솟값, 최댓값을 저장할 포인터를 인자로 받아서 최솟값과 최댓값을 찾고 포인터에 저장해준다.
 * 반환 : 없음
 */
void get_min_max(int* arr, int* min, int* max)
{
	//최솟값 먼저.
	*min = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (*min > arr[i])
		{
			*min = arr[i];
		}
	}

	//최댓값.
	*max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (*max < arr[i])
		{
			*max = arr[i];
		}
	}

}

/*
* 함수명 : solve()
* 기능(책임) : 배열을 초기화하고 get_min_max() 함수를 호출하여 최댓값과 최솟값을 찾는다.
* 반환 : 없음
*/
void solve()
{
	int arr[10] = { 17, 63, 8, 91, 34, 57, 22, 79, 5, 48 };
	int max;
	int min;

	int* p_max = &max;
	int* p_min = &min;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	get_min_max(arr, p_min, p_max);
	printf("최댓값 : %d\n", *p_max);
	printf("최솟값 : %d\n", *p_min);


}


int main()
{
	solve();
	return 0;
}