//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-04.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS		// ���̺귯�� ��� �տ� �����Ѵ�.
#include <stdio.h>
#include <string.h>					// ���ڿ� ó�� �Լ� ��� �� ����
#define SIZE 10

int ex09_04(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)					// s1�� �ּҿ� s2�� �ּҸ� ���ϸ� �ȵȴ�.
		printf("same address");

	if (strcmp(s1, s2) == 0)		// s1�� s2�� ������ ���Ѵ�.
		printf("same string\n");

	printf("�н�����? ");
	scanf("%s", password);
	if (strcmp(password, "abcd1234") == 0)
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;
}