//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment01.c
//��¥ : 2025-10-01
//��1

/* ���ϸ�: Assignment01.c

 * ����: ���ͳ� ����Ʈ�� �α����� �� ���Ȥ� ���̵�� �н����带 �����ϱ� �� LOGIN ����ü�� �����Ͻÿ�.
 * ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
 * LOIGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �н����带 ����� ���� �н������� ������ ������ �Ȥ������� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-01
 * ����: v1.0

 */

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