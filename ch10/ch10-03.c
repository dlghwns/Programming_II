//학번: 202511229
//이름: 이호준
//프로그램 명 : ch10-03.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct contact		// 연락처
{
	char name[20];	// 이름
	char phone[20];	// 전화번호(01012345678 형식의 문자열로 저장)
	int ringtone;	// 벨 소리(0~9 선택)
};

/*
* 함수명 : ex10_01
* 기능(책임) : 구조체를 초기화하고 출력
* 반환 : 0
*/
int ex10_03(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;// 구조체 변수로 초기화할 수 있다.
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;	// 구조체 변수를 대입할 수 있다.
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}


int main()
{
	ex10_03();
	return 0;
}