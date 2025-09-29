//학번: 202511229
//이름: 이호준
//프로그램 명 : ch07-06.c
//날짜 : 2025-09-26
#include <stdio.h>
int exercise0706();


int main()
{
	exercise0706();
	return 0;
}

int exercise0706()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//printf("arr[5] = %d\n", arr[5]);		// 할당되지 않은 메모리를 읽어온다.
	//arr[5] = 100;							// 할당되지 않은 메모리를 변경한다. (실행 에러)

	return 0;
}