 //�й�: 202511229
 //�̸�: ��ȣ��
 //���α׷� �� : Assignment01.c
 //��¥ : 2025-09-26

/* ���ϸ�: Assignment01.c

 * ����:���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
  ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
  ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ù��°�װ� ������ �Է¹޾� 10���� ���� �迭�� ��� �迭�� ���.
 * ��ȯ : ����
 */
int solve()
{
	int a[10];
	int first, common_difference = 0;

	printf("ù��° ��?");
	scanf("%d", &first);

	printf("����?");
	scanf("%d", &common_difference);


	a[0] = first;  //ù°���� ù°�� �Է¹���������.
	printf("�������� : %d  ", a[0]);
	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] + common_difference;
		printf("%d  ", a[i]);
	}


}


int main()
{
	solve();
	return 0;
}