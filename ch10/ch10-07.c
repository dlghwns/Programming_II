//학번: 202511229
//이름: 이호준
//프로그램 명 : ch10-07.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STR_SIZE 20		// 문자열의 길이

typedef struct contact	// 연락처
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
} CONTACT;
/*
* 함수명 : ex10_07
* 기능(책임) : 구조체포인터로 접근
* 반환 : 0
*/
int ex10_07(void)
{
	CONTACT ct = { "김석진", "01011112222", 0 };
	CONTACT* p = &ct;
	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("이    름: %s\n", p->name);
	printf("전화번호: %s\n", p->phone);
	printf("벨 소 리: %d\n", p->ringtone);

	return 0;
}


int main()
{
	ex10_07();
	return 0;
}