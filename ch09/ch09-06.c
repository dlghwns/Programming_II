//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-06.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



/*
* �Լ��� : ex09_06
* ���(å��) : ���ڿ��� �˻�
* ��ȯ : 0
*/
int ex09_06(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}