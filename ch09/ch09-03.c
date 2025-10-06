//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-03.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 32


/*
* 함수명 : ex09_03
* 기능(책임) : 문자열의 교환
* 반환 : 0
*/
int ex09_03(void) {
	char str1[SIZE] = "";	// 널 문자열로 초기화한다.
	char str2[SIZE] = "";	// 널 문자열로 초기화한다.
	char temp[SIZE];

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	// 두 문자 배열을 swap한다.
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	return 0;
}