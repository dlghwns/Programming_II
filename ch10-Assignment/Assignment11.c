//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment11.c
//��¥ : 2025-10-01
//��3


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct PRODUCT
{
	char name[100];
	int price;
	int stock;
}product;


void solve()
{

	product p[3] = {
		{"�Ƹ޸�ī��", 4000, 10},
		{"ī���", 4500, 10},
		{"�÷�ȭ��Ʈ", 5000, 10}
	};



	char order[100];
	int count;

	while(1)
	{

		printf("�ֹ��� ��ǰ��? ");
		scanf("%s", order);

		if(strcmp(order, ".") == 0)
		{
			break;
		} //����üũ

		int num = 0;


		if (strcmp(order, "�Ƹ޸�ī��") == 0)
		{
			num = 0;
		}
		else if (strcmp(order, "ī���") == 0)
		{
			num = 1;
		}
		else if (strcmp(order, "�÷�ȭ��Ʈ") == 0)
		{
			num = 2;
		}
		else
		{
			printf("���� �޴�\n");
			continue;
		} //�޴�üũ
		

		printf("�ֹ��� ����? ");
		scanf("%d", &count);
		if ((p[num].stock - count) < 0)
		{
			printf("��� ����\n");
			continue;
		}
		else
		{
			p[num].stock -= count;
		} //�����
		

		//���
		printf("���� �ݾ�: %d  %s ��� : %d\n", (count * p[num].price), order, p[num].stock);
	}


	for (int i = 0; i < 3; i++)
	{
		printf("%s %d�� ���:%d\n", p[i].name, p[i].price, p[i].stock);

	}
}

int main()
{
	solve();
	return 0;
}