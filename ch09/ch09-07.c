//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-07.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* 함수명 : ex09_07
* 기능(책임) : 문자열의 토큰 나누기
* 반환 : 0
*/
int ex09_07(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line numper: %s\n", p);

	return 0;
}