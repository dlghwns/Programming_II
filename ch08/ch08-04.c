//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-04.c
//��¥ : 2025-09-26

#include <stdio.h>

void test1(int x)
{
	x = 20;
}

void test2(int* p)
{
	*p = 20;
}

int main()
{
	int x = 10;
	test1(x);
	printf("test1 ȣ�� �� x = %d\n", x);

	test2(&x);
	printf("test2 ȣ�� �� x = %d\n", x);

	return 0;
}