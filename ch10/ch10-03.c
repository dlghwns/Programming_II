//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch10-03.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct contact		// ����ó
{
	char name[20];	// �̸�
	char phone[20];	// ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
	int ringtone;	// �� �Ҹ�(0~9 ����)
};

/*
* �Լ��� : ex10_01
* ���(å��) : ����ü�� �ʱ�ȭ�ϰ� ���
* ��ȯ : 0
*/
int ex10_03(void)
{
	struct contact ct = { "�輮��", "01011112222", 0 };
	struct contact ct1 = { "������", "01012345678", 1 };
	struct contact ct2 = ct1;// ����ü ������ �ʱ�ȭ�� �� �ִ�.
	printf("ct1���� �ʱ�ȭ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;	// ����ü ������ ������ �� �ִ�.
	printf("ct�� ������ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}


int main()
{
	ex10_03();
	return 0;
}