//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment15.c
//��¥ : 2025-10-01
//��3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct
{
	int x;
	int y;
}POINT;


POINT point[] =
{
	{7, 4},
	{12, 93},
	{22,31},
	{1, 20},
	{34, 53},
	{41, 2},
	{32, 9},
	{21, 31},
	{8, 2},
	{3, 5}
};

void swap_point(POINT arr[], int size)
{
	/*for (int i = 0; i < size; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);

	}*/  //�׽�Ʈ ǥ��

	//����.

	for (int i = 0; i < size - 1; i++)
	{

		for (int j = 0; j < size - 1; j++)
		{

			if (arr[j].x > arr[j + 1].x)
			{
				POINT temp = arr[j];
				arr[j] = arr[j + 1];    //a->b
				arr[j + 1] = temp;

			}
		}

	}
}

void solve()
{
	printf("<<���� ��>>\n");
	int size;
	size = sizeof(point) / sizeof(point[0]);

	for (int i = 0; i < size; i++)
	{
		printf("(%d, %d)", point[i].x, point[i].y);
	} printf("\n");

	swap_point(point, size);

	printf("<<���� ��>>\n");
	for (int i = 0; i < size; i++)
	{
		printf("(%d, %d)", point[i].x, point[i].y);
	} printf("\n");


}

int main()
{
	solve();

	return 0;
}