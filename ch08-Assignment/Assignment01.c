//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment01.c
//��¥ : 2025-09-26



/* ���ϸ�: Assignment01.c

 * ����: ũ�Ⱑ 3�� double �� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �� �ּ� ���ϱ� �����ڸ� ������� ���ÿ�
 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ũ�Ⱑ 3�� double �� �迭�� ��� ������ �ε����� �� �ε����� �´� �ּҸ� ������ش�.
 * ��ȯ : ����
 */
void solve()
{
	double arr[3];
	double* p = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("x[%i]�� �ּ� : %x\n", i, p + i);
	}

}


int main()
{
	solve();
	return 0;
}