//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment01.c
//��¥ : 2025-10-01
//��1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct LOGIN
{
	char id[800];
	char password[800];
};

void solve()
{
	struct LOGIN user;
	printf("ID: ");
	scanf("%s", user.id);
	printf("PW: ");
	scanf("%s", user.password);

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