//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment11.c
//��¥ : 2025-10-01
//��3


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct PRODUCT
{
	char name[100];
	int price;
	int stock;
};

struct PRODUCT product[3] = {
	{"�Ƹ޸�ī��", 4000, 10},
	{"ī���", 4500, 10},
	{"�÷�ȭ��Ʈ", 5000, 10}
};

void solve()
{
	int run = 1;

	char order[100];
	int count;

	while (run)
	{
		printf("�ֹ��� ��ǰ��? ");
		scanf("%s", &order);

		if(strcmp(order, ".") == 0)
		{
			break;
		} //����üũ

		if ((strcmp(order, "�Ƹ޸�ī��") == 0 || strcmp(order, "ī���") == 0 || strcmp(order, "�÷�ȭ��Ʈ") == 0) == 0)
		{
			printf("���� �޴�\n");
			continue;
		} //�޴�üũ
		

		printf("�ֹ��� ����? ");
		scanf("%d", &count);
		if (count > 10)
		{
			printf("��� ����\n");
			continue;
		} //���üũ

		int total_price = 0;
		int left_stock = 0;

		//�Ƹ޸�ī�� �Ի�
		if (strcmp(order, "�Ƹ޸�ī��") == 0)
		{
			total_price = count * product[0].price;
			left_stock = 10 - count;
		}
		//ī��� ���
		else if (strcmp(order, "ī���") == 0)
		{
			total_price = count * product[1].price;
			left_stock = 10 - count;
		}
		//�÷�ȭ��Ʈ ���
		else if (strcmp(order, "�÷�ȭ��Ʈ") == 0)
		{
			total_price = count * product[2].price;
			left_stock = 10 - count;
		}

		//���
		printf("���� �ݾ�: %d  %s ��� : %d\n", total_price, order, left_stock);
	}


	for (int i = 0; i < 3; i++)
	{
		printf("%s %d�� ���:%d\n", product[i].name, product[i].price, product[i].stock);

	}
}

int main()
{
	solve();
	return 0;
}