//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment04.c
//��¥ : 2025-10-01
//��1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct DATE
{
	int y;
	int m;
	int d;
};


void print_date()
{
	struct DATE date;

	printf("��? : ");
	scanf("%d", &date.y);
	printf("��? : ");
	scanf("%d", &date.m);
	printf("��? : ");
	scanf("%d", &date.d);

	printf("%d/%d/%d", date.y, date.m, date.d);
}

int main()
{
	print_date();
	return 0;
}