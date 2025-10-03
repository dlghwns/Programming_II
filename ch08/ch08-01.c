//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-01.c
//날짜 : 2025-09-26

#include <stdio.h>

 /*
 * 함수명 : ex08_01
 * 기능(책임) : 각각 바이트를 출력
 * 반환 : 0
 */
int ex08_01()
{
	int* pi;
	int* pd;
	int* pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));	//4바이트
	printf("sizeof(pd) = %zd\n", sizeof(pd));	//4바이트
	printf("sizeof(pc) = %zd\n", sizeof(pc));	//4바이트

	printf("sizeof(int*) = %zd\n", sizeof(int*));	//4바이트
	printf("sizeof(double*) = %zd\n", sizeof(double*));	//4바이트
	printf("sizeof(char*) = %zd\n", sizeof(char*));	//4바이트

	return 0;
}

int main()
{
	ex08_01();
	return 0;
}