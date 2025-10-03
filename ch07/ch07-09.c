//학번: 202511229
//이름: 이호준
//프로그램 명 : ch07-09.c
//날짜 : 2025-09-26
#include <stdio.h>
int exercise0709();


int main()
{
	exercise0709();
	return 0;
}

/*
* 함수명 : exercise0709
* 기능(책임) : 배열에서 키값을 찾아 인덱스를 출력
* 반환 : 0
*/
int exercise0709()
{
	int data[] = { 78,34,52,15,63,15,25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

	printf("찾을 값(키)? ");
	scanf_s("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (data[i] == key)
		{
			printf("찾은 원소의 인덱스: %d\n", i);
		}
	}

	return 0;
}