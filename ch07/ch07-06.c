//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch07-06.c
//��¥ : 2025-09-26
#include <stdio.h>
int exercise0706();


int main()
{
	exercise0706();
	return 0;
}

int exercise0706()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//printf("arr[5] = %d\n", arr[5]);		// �Ҵ���� ���� �޸𸮸� �о�´�.
	//arr[5] = 100;							// �Ҵ���� ���� �޸𸮸� �����Ѵ�. (���� ����)

	return 0;
}