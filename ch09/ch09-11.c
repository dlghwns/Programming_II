//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-11.c
//날짜 : 2025-10-06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128
int swap_string(char* lhs, char* rhs, int size);

int ex09_11(void)
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";

	printf("¹®ÀÚ¿­ 2°³? ");
	scanf("%s %s", str1, str2);

	printf("str1=%s, str2=%s\n", str1, str2);
	swap_string(str1, str2, SIZE);
	printf("str1=%s, str2=%s\n", str1, str2);
	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size)
		return 0;	// swap_string ½ÇÆÐ

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	return 1;	// swap_string ¼º°ø
}