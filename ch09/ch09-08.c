//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-08.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* 함수명 : ex09_08
* 기능(책임) : 문자열의 입출력
* 반환 : 0
*/
int ex09_08(void)
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("문자열? ");
	gets_s(in_str, sizeof(in_str));		// 빈칸을 포함한 문자열 입력
	puts(in_str);	// 문자열과 줄바꿈 문자를 함께 출력한다.
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec); // 문자열을 만든다.
	puts(out_str);
	return 0;
}