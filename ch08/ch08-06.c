//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-06.c
//��¥ : 2025-09-26

#include <stdio.h>

int ex08_06(void)
{
	int* p = (int*)0x100;	// ������ ������ Ȯ���ϱ� ���� ���� �ּҸ� �����Ѵ�.
	double* q = (double*)0x100;
	char* r = (char*)0x100;

	printf("int*  : %p, %p, %p\n", p, p + 1, p + 2);		// 4����Ʈ�� ����
	printf("double*: %p, %p, %p\n", q, q + 1, q + 2);		// 8����Ʈ�� ����
	printf("char* : %p, %p, %p\n", r, r + 1, r + 2);		// 1����Ʈ�� ����

	return 0;
}

int main()
{

	ex08_06();
	return 0;
}