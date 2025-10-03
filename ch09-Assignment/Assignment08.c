//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment06.c
//��¥ : 2025-10-03
//��2

/* ���ϸ�: Assignment06.c

 * ����: �ð� ���ڿ��� ��ȿ�� �ð����� Ȯ���ϴ� check_time_str�Լ��� �ۼ��Ͻÿ�.
 * ���� ��� 120000�� 12:00:00�� �ش��ϴ� ��ȿ�� �ð����ڿ������� 327892�� ��ȿ�� �ð� ���ڿ��� �ƴϴ�.
 * check_time_str �Լ��� �̿��ؼ� �Էµ� ���ڿ��� �ùٸ� �ð� ���ڿ����� �˻��ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-03
 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 /*
 * �Լ��� : check_time_str()
 * ���(å��) : ���޹��� ���ڿ��� 2���ھ� ������ int������ �ٲپ��� �� ���ǿ� �°� üũ�� �Ѵ�.
 * ��ȯ : ���ǿ� �������� �ʴٸ� 1�� �����ϴٸ� 0�� ��ȯ�Ѵ�.
 */
int check_time_str(char str[])
{
	char temp[10];
	temp[0] = str[0];
	temp[1] = str[1];
	int h = atoi(temp);
	if (h >= 25)
	{
		return 1;
	}

	temp[0] = str[2];
	temp[1] = str[3];
	int m = atoi(temp);
	if (m >= 61)
	{
		return 1;
	}

	temp[0] = str[4];
	temp[1] = str[5];
	int s = atoi(temp);
	if (s >= 61)
	{
		return 1;
	}


	return 0;

}

 /*
 * �Լ��� : solve()
 * ���(å��) : ���ڿ��� �Է¹޾� check_time_str�Լ��� ȣ������.
 * ��ȯ : ����
 */
void solve()
{
	char str[1000];

	while (1)
	{
		printf("�ð�(. �Է½� ����) : ");
		scanf("%s", str);
		if (strcmp(str, ".") == 0)
		{
			break;
		}

		else
		{
			int ck = check_time_str(str);
			if (ck == 1)
			{
				printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
				continue;
			}
			else if (ck == 0)
			{
				printf("%s�� ��ȿ�� �ð��Դϴ�.\n", str);
			}
			else
			{
				printf("error\n");
			}
		}

	}

}


int main()
{
	solve();
	return 0;
}