//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch10-14.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int ex10_14(void)
{
	enum direction d1 = NORTH;		// ����ü ���� ����

	d1 = EAST;
	printf("d1 = %d\n", d1);		// 2�� ��µȴ�.

	switch (d1)
	{
	case NORTH:						// ���� ����� case���� ����� �� �ִ�.
		printf("�������� �̵��մϴ�.\n");
		break;
	case SOUTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case EAST:
		printf("�������� �̵��մϴ�.\n");
		break;
	case WEST:
		printf("�������� �̵��մϴ�.\n");
		break;
	}
	return 0;
}



int main()
{
	ex10_14();
	return 0;
}