//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-07.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* �Լ��� : ex09_07
* ���(å��) : ���ڿ��� ��ū ������
* ��ȯ : 0
*/
int ex09_07(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line numper: %s\n", p);

	return 0;
}