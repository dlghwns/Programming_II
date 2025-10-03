//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment03.c
//날짜 : 2025-10-01
//별2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct LOGIN
{
	char id[800];
	char password[800];
};
struct LOGIN user;

/*
 * 함수명 : check()
 * 기능(책임) : 아이디와 패스워드를 비교하여 로그인 성공/실패 출력
 * 반환 : 없음
 */
void check()
{
	if (strcmp(user.id, "guest") == 0 && strcmp(user.password, "idontknow") == 0)
	{
		printf("로그인 성공!\n");
	}
	else
	{
		printf("로그인 실패!\n");
	}
}

/*
 * 함수명 : solve()
 * 기능(책임) : 아이디와 패스워드를 입력받아 저장하고 check() 호출
 * 반환 : 없음
 */
void solve()
{

	printf("ID: ");
	scanf("%s", &user.id);
	printf("PW: ");
	scanf("%s", &user.password);

	//======================
	check();
}

int main()
{
	solve();
	return 0;
}