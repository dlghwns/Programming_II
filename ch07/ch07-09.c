//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch07-09.c
//��¥ : 2025-09-26
#include <stdio.h>
int exercise0709();


int main()
{
	exercise0709();
	return 0;
}

/*
* �Լ��� : exercise0709
* ���(å��) : �迭���� Ű���� ã�� �ε����� ���
* ��ȯ : 0
*/
int exercise0709()
{
	int data[] = { 78,34,52,15,63,15,25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf_s("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (data[i] == key)
		{
			printf("ã�� ������ �ε���: %d\n", i);
		}
	}

	return 0;
}