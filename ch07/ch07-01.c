//학번: 202511229
//이름: 이호준
//프로그램 명 : ch07-01.c
//날짜 : 2023-09-26



#include <stdio.h>
int exercise0701();


int main(void)
{
	exercise0701();

	return 0;
}

int exercise0701()
{
	int arr[5];									// 크기가 5인 배열 선언
	int byte_size = 0;							// 배열의 바이트 크기를 저장할 변수
	int size = 0;								// 배열의 크기를 저장할 변수
	int i;

	byte_size = sizeof(arr);					// 배열의 바이트 크기
	printf("배열의 바이트 크기: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);		// 배열의 크기(원소의 개수)
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}

	return 0;
}