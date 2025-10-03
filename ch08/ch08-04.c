//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-04.c
//날짜 : 2025-09-26

#include <stdio.h>
 /*
 * 함수명 : test1()
 * 기능(책임) : 값에 의한 호출을 보여준다.
 * 반환 : 0
 */
void test1(int x)
{
	x = 20;
}
/*
* 함수명 : test2()
* 기능(책임) : 참조에 의한 호출을 보여준다.
* 반환 : 0
*/
void test2(int* p)
{
	*p = 20;
}

int main()
{
	int x = 10;
	test1(x);
	printf("test1 호출 후 x = %d\n", x);

	test2(&x);
	printf("test2 호출 후 x = %d\n", x);

	return 0;
}