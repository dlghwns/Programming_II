//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-14.c
//날짜 : 2025-09-26
#include <stdio.h>
void get_sum_product(int x, int y, int* sum, int* product);


/*
 * 함수명 : ex08_14
 * 기능(책임) : 두 정수의 합과 곱을 구하는 함수를 호출
 * 반환 : 0
 */
int ex08_14(void)
{
	int result1, result2;

	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

/*
 * 함수명 : get_sum_product()
 * 기능(책임) : 두 정수의 합과 곱을 구해서 포인터로 전달된 변수에 저장
 * 반환 : 0
 */
void get_sum_product(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}

int main()
{
	ex08_14();
	return 0;
}