//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-10.c
//��¥ : 2025-09-26
#include <stdio.h>

int ex08_10(void)
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5];
	int* p = x;		// p�� x[0]�� ����Ų��.
	int i;

	for (i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n");

	p = y;			// p�� ���� y[0]�� ����Ų��.
	for (i = 0; i < 5; i++)
		p[i] = x[i];

	for (i = 0; i < 5; i++, p++)
		printf("%d ", *p);
	printf("\n");

	return 0;
}


int main()
{
	ex08_10();
	return 0;
}