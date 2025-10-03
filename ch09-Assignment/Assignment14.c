//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment14.c
//��¥ : 2025-10-03
//��2

/* ���ϸ�: Assignment14.c

 * ����: ���ͳ� ����Ʈ�� ȸ�� ������ �Ϸ��� ����ڷκ��� ���̵� �Է¹޾� ������ ���̵����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ���̵�� �����ڷ� �����ؾ� �ϰ�, �����ڿ� ���ڷθ� �����Ǹ� �ּ� 8�ڰ� �Ǿ�� �Ѵ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-03
 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

 /*
 * �Լ��� : checkid(str)
 * ���(å��) : ���޹��� ��Ʈ������ ���ǿ� �´��� Ȯ���ϰ� ���ǿ� �°� ��ȯ�� ���ش�.
 * ��ȯ : ���ǿ� ����:0 �׷��� ����:1
 */

int checkid(char str[])
{
	
	if (isalpha(str[0]) == 0)
	{
		printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
		return 1;
	}
	
	if (strlen(str) < 8)
	{
		printf("ID�� 8�� �̻��̿��� �մϴ�.\n");
		return 1;
	}

	for (int i = 0; i < strlen(str); i++) {
		if (!isalnum(str[i])) {
			printf("ID�� �����ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
			return 1;
		}
	}

	return 0;
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ���̵� �Է¹ް� ������ üũ���ִ� �Լ��� ȣ�����ش�.
 * ��ȯ : ����
 */
void solve()
{
	char str[1000];

	while (1)
	{
		printf("ID? ");
		scanf("%s", str);

		int ck = checkid(str);
		if (ck == 1)
		{
			continue;
		}
		else if (ck == 0)
		{
			printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", str);
			continue;
		}
		else
		{
			printf("error\n");
			continue;
		}

	}


}


int main()
{
	solve();
	return 0;
}