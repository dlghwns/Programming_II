//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-01.c
//��¥ : 2025-09-26

#include <stdio.h>

 /*
 * �Լ��� : ex08_01
 * ���(å��) : ���� ����Ʈ�� ���
 * ��ȯ : 0
 */
int ex08_01()
{
	int* pi;
	int* pd;
	int* pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));	//4����Ʈ
	printf("sizeof(pd) = %zd\n", sizeof(pd));	//4����Ʈ
	printf("sizeof(pc) = %zd\n", sizeof(pc));	//4����Ʈ

	printf("sizeof(int*) = %zd\n", sizeof(int*));	//4����Ʈ
	printf("sizeof(double*) = %zd\n", sizeof(double*));	//4����Ʈ
	printf("sizeof(char*) = %zd\n", sizeof(char*));	//4����Ʈ

	return 0;
}

int main()
{
	ex08_01();
	return 0;
}