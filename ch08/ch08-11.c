//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-11.c
//��¥ : 2025-09-26

#include <stdio.h>


/*
 * �Լ��� : ex08_11
 * ���(å��) : ������ �迭�� �̿��� ���
 * ��ȯ : 0
 */
int ex08_11(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };	
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);
	}
	printf("\n");

	return 0;
}
int main()
{
	ex08_11();
	return 0;
}