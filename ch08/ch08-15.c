//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-15.c
//날짜 : 2025-09-26
#include <stdio.h>
#define SIZE 10
void copy_array(const int source[], int target[], int size);
void print_array(const int arr[], int size);

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

void copy_array(const int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];
}

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