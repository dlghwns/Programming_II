//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment18.c
//날짜 : 2025-09-26

/* 파일명: Assignment18.c

 * 내용:수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다.
 * 최대 10개의 정수형 원소를 저장할 수 있는 집합(set)을 구현하시오.
 * 정수를 입력받아 집합의 원소로 추가하고, 그 때마다 집합의 원소들을 출력하시오.

 * 작성자: 이호준

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * 함수명 : add(int arr[], int num, int* count)
 * 기능(책임) : 입력받은 원소가 이미 배열에 존재하는지 확인.
 * 이미 존재한다면 해당 인덱스에 있다고 알림.
 * 존재하지 않는다면 포인터의 값(포인터로 입력받아 다른 함수에서 접근 가능하게 함.) 부터 저장을 시작함.
 */
void add(int arr[], int num, int* count)
{
	for (int i = 0; i < *count; i++)
	{
		if (arr[i] == num)
		{
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);


			printf("현재 배열 : ");
			for (int j = 0; j < *count; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			return;
		}

	}

	if (*count < 10)
	{
		arr[*count] = num;
		(*count)++;
	}

	printf("현재 배열 : ");
	for (int i = 0; i < *count; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

/*
* 함수명 : solve()
* 기능(책임) : 배열에 추가할 원소를 입력받고 add함수에 전달해준다.
* 반환 : 없음
*/
void solve()
{
	int arr[10] = { 0 };
	int num;
	int count = 0;

	while (count != 10)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &num);

		add(arr, num, &count);
	}
}


int main()
{
	solve();
	return 0;
}