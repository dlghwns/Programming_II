//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch07-03.c
//��¥ : 2023-09-26

#include <stdio.h>
int exercise0703();


int main()
{
	exercise0703();

	return 0;
}

int exercise0703()
{
	int arr[5] = { 1, 2, 3, 4, 5 };		// �迭�� ũ�⸸ŭ �ʱⰪ�� �����Ѵ�.
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}