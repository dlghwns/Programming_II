//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment08.c
//��¥ : 2025-09-26

/* ���ϸ�: PAssignment08.c

 * ����: ��ǰ ������ ����� ������ �迭�� ���ؼ� ������(%)/�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ��ǰ ������ ����� �迭�� ũ��� 5�̰�, ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�.
 * ���ε� ������ ������ �迭�� �����ؾ��Ѵ�.
 * �ۼ���: ��ȣ��

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /*
 * �Լ��� : cal()
 * ���(å��) : ��ǰ ���ݰ� �������� �Է¹޾� ���ε� ������ ����Ѵ�.
 * ��ȯ : ���ε� ����
 */
int cal(int price, int discount)
{
	return price - (price * discount / 100);
}


/*
* �Լ��� : solve()
* ���(å��) : ���İ��� �������� �Է¹޾� ���ε� ������ ����Ѵ�.
* ��ȯ : ����
*/
void solve()
{
	int price[5];
	int discount;

	printf("��ǰ�� 5���� �Է��ϼ��� : ");
	scanf("%d %d %d %d %d", &price[0], &price[1], &price[2], &price[3], &price[4]);

	printf("������(%)? ");
	scanf("%d", &discount);

	for (int i = 0; i < 5; i++)
	{
		printf("���� : %d --> ���ΰ�:  %d\n", price[i], cal(price[i], discount));
	}

}


int main()
{
	solve();
	return 0;
}