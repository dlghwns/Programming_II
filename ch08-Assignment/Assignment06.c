//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment06.c
//��¥ : 2025-09-26


/* ���ϸ�: Assignment06.c

 * ����: ������ �迭�� ���ؼ� �迭�� ���� �� �ִ밪�� �ּڰ��� ã�� get_min_max() �Լ��� �����Ͻÿ�.
 * ũ�Ⱑ 10�� int �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� get_min_max �Լ��� �ִ񰪰� �ּڰ��� ã�Ƽ� ����Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : get_min_max()
 * ���(å��) : �迭�� �ּڰ�, �ִ��� ������ �����͸� ���ڷ� �޾Ƽ� �ּڰ��� �ִ��� ã�� �����Ϳ� �������ش�.
 * ��ȯ : ����
 */
void get_min_max(int* arr, int* min, int* max)
{
	//�ּڰ� ����.
	*min = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (*min > arr[i])
		{
			*min = arr[i];
		}
	}

	//�ִ�.
	*max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (*max < arr[i])
		{
			*max = arr[i];
		}
	}

}

/*
* �Լ��� : solve()
* ���(å��) : �迭�� �ʱ�ȭ�ϰ� get_min_max() �Լ��� ȣ���Ͽ� �ִ񰪰� �ּڰ��� ã�´�.
* ��ȯ : ����
*/
void solve()
{
	int arr[10] = { 17, 63, 8, 91, 34, 57, 22, 79, 5, 48 };
	int max;
	int min;

	int* p_max = &max;
	int* p_min = &min;

	printf("�迭: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	get_min_max(arr, p_min, p_max);
	printf("�ִ� : %d\n", *p_max);
	printf("�ּڰ� : %d\n", *p_min);


}


int main()
{
	solve();
	return 0;
}