//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch10-01.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ü�� ���Ǵ� ���� �Լ� �ۿ� ���ش�.
struct contact		// ����ó
{
	char name[20];	// �̸�
	char phone[20];	// ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
	int ringtone;	// �� �Ҹ�(0~9 ����)
};

int ex10_01(void)
{
	printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));
	//printf("contact ����ü�� ũ�� = %d\n, sizeof(contact));		// ������ ����

	return 0;
}

void test()
{
	struct contact c1;		// ���� �Լ����� ����ü�� ����� �� �ִ�.
	{

	};
}



int main()
{
	ex10_01();
	return 0;
}