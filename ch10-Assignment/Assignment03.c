//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment03.c
//��¥ : 2025-10-01
//��2

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
		printf("�α��� ����!\n");
	}
	else
	{
		printf("�α��� ����!\n");
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