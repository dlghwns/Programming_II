//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-08.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* �Լ��� : ex09_08
* ���(å��) : ���ڿ��� �����
* ��ȯ : 0
*/
int ex09_08(void)
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("���ڿ�? ");
	gets_s(in_str, sizeof(in_str));		// ��ĭ�� ������ ���ڿ� �Է�
	puts(in_str);	// ���ڿ��� �ٹٲ� ���ڸ� �Բ� ����Ѵ�.
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec); // ���ڿ��� �����.
	puts(out_str);
	return 0;
}