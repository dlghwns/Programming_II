#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STR_SIZE 20		// ���ڿ��� ����

typedef struct contact	// ����ó
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int ringtone;
} CONTACT;

int ex10_07(void)
{
	CONTACT ct = { "�輮��", "01011112222", 0 };
	CONTACT* p = &ct;
	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("��    ��: %s\n", p->name);
	printf("��ȭ��ȣ: %s\n", p->phone);
	printf("�� �� ��: %d\n", p->ringtone);

	return 0;
}