//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment01.c
//��¥ : 2025-10-03
//��1

/* ���ϸ�: Assignment01.c

 * ����: �� ���� ���ڿ��� �Է¹޾� ���� ����(' ', '\n','\t','\f','\r','\v')�� ������ ���� ���α׷��� �ۼ��Ͻÿ�.
 
 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-03
 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
 * �Լ��� : solve()
 * ���(å��) : ���ڿ��� �Է¹޴´�.
 * �Է¹��� ���ڿ����� ���鹮�ڸ� ã�� ����� ������ش�.
 * ��ȯ : ����
 */
void solve()
{
	int count = 0;
	char str[1000];
	printf("���ڿ��� �Է��ϼ���: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v') {
			count++;
		}
	}


	printf("���� ���� ����: %d\n", count);

}


int main()
{
	solve();
	return 0;
}