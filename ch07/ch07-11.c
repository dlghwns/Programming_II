//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch07-11.c
//��¥ : 2025-09-26
#include <stdio.h>
#define SIZE 5
int exercise0711();


int main()
{
	exercise0711();
	return 0;
}


/*
* �Լ��� : exercise0711
* ���(å��) : �������� �˰����� ����Ͽ� �迭�� ������������ ����
* ��ȯ : 0
*/
int exercise0711()
{
	int data[SIZE] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE - 1; i++)		// 0~(i-1)������ ���ĵ� �����̴�.
	{
		index = i;						// ������ �迭 �� ���� ���� ������ �ε���
		for (j = i + 1; j < SIZE; j++)
		{// data[i] ~ data[SIZE-1]�� ���� ���� ������ �ε����� index�� ����
			if (data[j] < data[index])	// �������� ����
			{
				index = j;
			}
		}
		// i��° ���Ҹ� index�� �ִ� ���ҿ� �¹ٲ۴�.
		if (index != i)
		{
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}	// i��° ���Ұ� i��°�� ���� ���� �ȴ�.
	}
	printf("���� ��:");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d", data[i]);
	}
	printf("\n");

	return 0;
}