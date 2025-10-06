//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-09.c
//날짜 : 2025-10-06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>		//문자 처리 라이브러리

/*
* 함수명 : ex09_09
* 기능(책임) : 문자열 포인터가 문자 배열을 가리킬때 문자 배열의 변경
* 반환 : 0
*/
void ex09_09(void)
{
	char str[64] = "";
	char* p = str;		//p는 str배열을 가리킨다.

	strcpy(p, "test string");	//p가 가리키는 문자 배열을 변경한다.

	
	if (islower(p[0]))			//단어의 첫 글자를 대문자로 바꾼다
		p[0] = toupper(p[0]);	//p가 가리키는 str0]을 변경한다.

	p = strchr(p, ' ');			//str중 ' ' 문자의 주소를 포인터 p에 저장한다.

	if(islower(p[1]))
		p[1] = toupper(p[1]);	// ' ' 다음 문자를 대문자로 바꾼다.

	puts(str);
	return 0;
}

int main()
{
	ex09_09();
	return 0;
}