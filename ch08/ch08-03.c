//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-03.c
//��¥ : 2025-09-26


#include <stdio.h>

int ex08_03(void)
{
	int x = 10;
	int* p = &x;	// p�� x�� �ּҷ� �ʱ�ȭ�Ѵ�.

	printf(" x = %d\n", x);
	printf("&x = %p\n", &x);	// &x�� �ּ� ���̹Ƿ� %p�� ���

	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);	// *p�� int�� �����̹Ƿ� %d�� ���
	printf("&p = %p\n", &p);	// �����͵� �����̹Ƿ� �ּҰ� �ִ�.

	*p = 20;					// x = 20;���� ����ȴ�.
	printf("*p = %d\n", *p);	// printf("*p = %d\n", x);�� ����ȴ�.

	return 0;
}

int main()
{
	ex08_03();
	return 0;
}