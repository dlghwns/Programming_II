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

void get_rect_info(int w, int h, int *parea, int *pperi)
{
	*parea = (w) * (h);
	*pperi = 2 * ((w) + (h));
}

void solve()
{
	int area;
	int peri;

	int w, h;

	printf("����? ");
	scanf("%d", &w);
	printf("����? ");
	scanf("%d", &h);

	get_rect_info(w, h, &area, &peri);
	printf("����: %d\n", area);
	printf("�ѷ�: %d\n", peri);
}

int main()
{
	solve();

	return 0;
}