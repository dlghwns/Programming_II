//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-02.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* �Լ��� : ex09_02
* ���(å��) :strlen �Լ� ��� ��
* ��ȯ : 0
*/
int ex09_02(void)
{
	char s1[] = "hello";
	//	char s2[] = "";	// �� ���ڿ� // ������ ���� �ּ� ó��
	int len = 0;

	printf("s1�� ����: %d\n", strlen(s1));
	printf("s2�� ����: %d\n", strlen(""));
	printf("����: %d\n", strlen("bye bye"));
	printf("s1�� ũ��: %d\n", sizeof(s1));; // �� ���ڸ� ������ �迭�� ũ��

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\0';
	printf("s1 = %s\n", s1);

	return 0;
}