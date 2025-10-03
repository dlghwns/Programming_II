//학번: 202511229
//이름: 이호준
//프로그램 명 : ch07-15.c
//날짜 : 2025-09-26
#include <stdio.h>
#define SIZE 7
int exercise0715();
void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);


int main()
{
	exercise0715();
	return 0;
}


/*
* 함수명 : exercise0715
* 기능(책임) : 배열을 복사하는 함수를 작성하고 사용
* 반환 : 0
*/
int exercise0715()
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);

	return 0;
}

/*
* 함수명 : copy_array
* 기능(책임) : 배열을 복사하는 함수
* 반환 : 0
*/
void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];			// 배열의 원소를 복사한다.
	}
}
/*
* 함수명 : print_array
* 기능(책임) : 배열의 원소를 출력하는 함수
* 반환 : 0
*/
void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}