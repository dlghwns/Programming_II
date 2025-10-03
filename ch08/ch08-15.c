//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-15.c
//��¥ : 2025-09-26
#include <stdio.h>
#define SIZE 10
void copy_array(const int source[], int target[], int size);
void print_array(const int arr[], int size);


/*
 * �Լ��� : ex08_15
 * ���(å��) : �迭 ���� �Լ� copy_array�� �ۼ��ϰ� �׽�Ʈ�Ѵ�.
 * ��ȯ : 0
 */
int ex08_15(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x =");
	print_array(x, SIZE);
	copy_array(x, y, SIZE);
	printf("y =");
	print_array(y, SIZE);

	return 0;
}

/*
 * �Լ��� : copy_array()
 * ���(å��) : source �迭�� ������ target �迭�� �����Ѵ�.
 * ��ȯ : 0
 */
void copy_array(const int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];
}
/*
 * �Լ��� : print_array()
 * ���(å��) : �迭�� ������ �����
 * ��ȯ : 0
 */
void print_array(const int arr[], int size)	
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	ex08_15();
	return 0;
}