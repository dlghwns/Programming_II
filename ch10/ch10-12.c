//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch10-12.c
//��¥ : 2025-10-06
#include <stdio.h>

typedef struct data {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int ex10_12(void)
{
	DATE dday;
	dday.year = 18;	// ������ 0~99������ ������ �����Ѵ�.
	dday.month = 11;
	dday.day = 30;

	printf("DATE�� ũ�� = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}