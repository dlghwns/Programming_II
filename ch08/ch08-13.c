//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-13.c
//날짜 : 2025-09-26
#include <stdio.h>
void swap(int* x, int* y);

/*
 * 함수명 : ex08_13
 * 기능(책임) : 두 정수의 값을 교환
 * 반환 : 0
 */
int ex08_13(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

/*
 * 함수명 : temp()
 * 기능(책임) : 두 정수의 값을 교환(포인터로 입력받음)
 * 반환 : 0
 */
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
};

int main()
{
	ex08_13();
	return 0;
}