//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-03.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 32


/*
* �Լ��� : ex09_03
* ���(å��) : ���ڿ��� ��ȯ
* ��ȯ : 0
*/
int ex09_03(void) {
	char str1[SIZE] = "";	// �� ���ڿ��� �ʱ�ȭ�Ѵ�.
	char str2[SIZE] = "";	// �� ���ڿ��� �ʱ�ȭ�Ѵ�.
	char temp[SIZE];

	printf("2���� ���ڿ�? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	// �� ���� �迭�� swap�Ѵ�.
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	return 0;
}