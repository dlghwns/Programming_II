//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch07-02.c
//��¥ : 2025-09-26

#include <stdio.h>
#define ARR_SIZE 5					// �迭�� ũ��� ����� ��ũ�� ����� ����
int exercise0702();


int main()
{
	exercise0702();

	return 0;
}

/*
* �Լ��� : exercise0702
* ���(å��) : �迭�� ũ�⸦ ��ũ�κ����� ����Ͽ� ���
* ��ȯ : 0
*/
int exercise0702()
{
	int arr[ARR_SIZE];				// �迭�� ũ�⸦ ��ũ�� ����� ������ �� �ִ�.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE�� �̿�
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE�� �̿�
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}