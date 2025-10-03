//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment02.c
//날짜 : 2025-10-01
//별2


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

struct LOGIN
{
	char id[800];
	char password[800];
};


struct LOGIN user;
struct LOGIN temp;


/*
 * 함수명 : make_lower()
 * 기능(책임) : 아이디와 패스워드를 소문자로 변환
 * 반환 : 없음
 */
void make_lower()
{
	for (int i = 0; temp.id[i] != NULL; i++)
	{
		user.id[i] = tolower(temp.id[i]);
	}
	for (int i = 0; temp.password[i] != NULL; i++)
	{
		user.password[i] = tolower(temp.password[i]);
	}
}

/*
 * 함수명 : solve()
 * 기능(책임) : 아이디와 패스워드를 입력받아 저장하고 출력
 * 반환 : 없음
 */
void solve()
{

	printf("ID: ");
	scanf("%s", &temp.id);
	printf("PW: ");
	scanf("%s", &temp.password);

	make_lower();

	//======================
	printf("\nID : %s\n", user.id);
	printf("PW : ");
	for (int i = 0; user.password[i] != '\0'; i++)
	{
		printf("*");
	} printf("\n");

}

int main()
{
	solve();
	return 0;
}