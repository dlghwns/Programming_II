//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment11.c
//��¥ : 2025-09-26

/* ���ϸ�: Assignment11.c

 * ����: ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info �Լ��� �ۼ��Ͻÿ�.
 * ���簢���� ����, ������ ���̸� �Է¹����� ���� get_rect_info �Լ��� �̿��ؼ� ���簢���� ���̿� �ѷ��� ���ؼ� ����ϴ�
 * ���α׷��� �ۼ��Ͻÿ�.

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int* pw, int* ph, int *parea)
{
	parea = (*pw) * (*ph);
}

void solve()
{
	int area = 0;
	int peri 0;
	int* peri = &peri;

	int w, h;
	int* pw = &w;
	int* ph = &h;

	printf("����? ");
	scanf("%d", &w);
	printf("����? ");
	scanf("%d", &h);

	get_rect_info(pw, ph, &area);
	printf("����: %d\n", area);
}

int main()
{


	return 0;
}