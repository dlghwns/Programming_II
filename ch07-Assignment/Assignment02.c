//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment02.c
//��¥ : 2025-09-26

/* ���ϸ�: Assignment02.c

 * ����:�������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
  ũ�Ⱑ 10�� �Ǽ��� �迭�� ���Ͽ� �������� ���� ä����� �Ѵ�.
  ù ��° ���� ���� ����(common ratio)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * �Լ��� : solve()
 * ���(å��) : ù°�װ� ���� �Է¹޾� 10���� ���� ���ϰ� �迭�� �־� �迭�� ������ش�.
 * ��ȯ : ����
 */
int solve()
{
	int a[10];
	int first;
	int common_ratio;

	printf("ù° ��?");
	scanf("%d", &first);

	printf("����?");
	scanf("%d", &common_ratio);

	a[0] = first;
	printf("������ : %d  ", a[0]);
	for (int i = 1; i <= 9; i++)
	{
		a[i] = a[i - 1] * common_ratio;
		printf("%d  ", a[i]);
	}

}


int main()
{
	solve();
	return 0;
}