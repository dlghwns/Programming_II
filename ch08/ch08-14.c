//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-14.c
//��¥ : 2025-09-26
#include <stdio.h>
void get_sum_product(int x, int y, int* sum, int* product);


/*
 * �Լ��� : ex08_14
 * ���(å��) : �� ������ �հ� ���� ���ϴ� �Լ��� ȣ��
 * ��ȯ : 0
 */
int ex08_14(void)
{
	int result1, result2;

	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

/*
 * �Լ��� : get_sum_product()
 * ���(å��) : �� ������ �հ� ���� ���ؼ� �����ͷ� ���޵� ������ ����
 * ��ȯ : 0
 */
void get_sum_product(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}

int main()
{
	ex08_14();
	return 0;
}