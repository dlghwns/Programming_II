//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-13.c
//��¥ : 2025-09-26
#include <stdio.h>
void swap(int* x, int* y);

/*
 * �Լ��� : ex08_13
 * ���(å��) : �� ������ ���� ��ȯ
 * ��ȯ : 0
 */
int ex08_13(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

/*
 * �Լ��� : temp()
 * ���(å��) : �� ������ ���� ��ȯ(�����ͷ� �Է¹���)
 * ��ȯ : 0
 */
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
};

int main()
{
	ex08_13();
	return 0;
}