//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch08-07.c
//��¥ : 2025-09-26

#include <stdio.h>


int ex08_07(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];	// arr[0]�� �ּҸ� p�� ������ �� �ִ�.

	int i;

	for (i = 0; i < 5; i++) {
		printf("p + %d = %p", i, p + i);			// arr[i]�� �ּҸ� ���
		printf("*(p + %d) = %d\n", i, *(p + i));	// arr[i]�� ���
	}

	return 0;
}

int main()
{

	ex08_07();
	return 0;
}