
//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-09.c
//��¥ : 2025-09-26

#include <stdio.h>

int ex08_09(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++)
		printf("p[%d] = %d\n", i, p[i]);		
	return 0;
}

int main()
{
	ex08_09();
	return 0;
}