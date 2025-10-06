//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-06.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



/*
* 함수명 : ex09_06
* 기능(책임) : 문자열의 검색
* 반환 : 0
*/
int ex09_06(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}