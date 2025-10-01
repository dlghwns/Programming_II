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