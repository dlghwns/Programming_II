//학번: 202511229
//이름: 이호준
//프로그램 명 : ch07-02.c
//날짜 : 2025-09-26

#include <stdio.h>
#define ARR_SIZE 5					// 배열의 크기로 사용할 매크로 상수의 정의
int exercise0702();


int main()
{
	exercise0702();

	return 0;
}

/*
* 함수명 : exercise0702
* 기능(책임) : 배열의 크기를 메크로변수를 사용하여 출력
* 반환 : 0
*/
int exercise0702()
{
	int arr[ARR_SIZE];				// 배열의 크기를 매크로 상수로 지정할 수 있다.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE를 이용
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE를 이용
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}