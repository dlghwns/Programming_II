//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment18.c
//��¥ : 2025-09-26

/* ���ϸ�: Assignment18.c

 * ����:���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�.
 * �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ����(set)�� �����Ͻÿ�.
 * ������ �Է¹޾� ������ ���ҷ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : add(int arr[], int num, int* count)
 * ���(å��) : �Է¹��� ���Ұ� �̹� �迭�� �����ϴ��� Ȯ��.
 * �̹� �����Ѵٸ� �ش� �ε����� �ִٰ� �˸�.
 * �������� �ʴ´ٸ� �������� ��(�����ͷ� �Է¹޾� �ٸ� �Լ����� ���� �����ϰ� ��.) ���� ������ ������.
 */
void add(int arr[], int num, int* count)
{
	for (int i = 0; i < *count; i++)
	{
		if (arr[i] == num)
		{
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);


			printf("���� �迭 : ");
			for (int j = 0; j < *count; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			return;
		}

	}

	if (*count < 10)
	{
		arr[*count] = num;
		(*count)++;
	}

	printf("���� �迭 : ");
	for (int i = 0; i < *count; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

/*
* �Լ��� : solve()
* ���(å��) : �迭�� �߰��� ���Ҹ� �Է¹ް� add�Լ��� �������ش�.
* ��ȯ : ����
*/
void solve()
{
	int arr[10] = { 0 };
	int num;
	int count = 0;

	while (count != 10)
	{
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &num);

		add(arr, num, &count);
	}
}


int main()
{
	solve();
	return 0;
}