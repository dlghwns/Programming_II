//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment03.c
//��¥ : 2025-10-03
//��1

/* ���ϸ�: Assignment03.c

 * ����: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-03
 * ����: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

 /*
 * �Լ��� : solve()
 * ���(å��) : ���ڿ��� �Է¹ް� ��ҹ��� ��ȯ�� �Ѵ�.
 * ��ȯ : ����
 */
void solve()
{
	char str[1000];
	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {        
            str[i] = toupper(str[i]); 
        }
        else if (isupper(str[i])) { 
            str[i] = tolower(str[i]); 
        }

    }

    printf("��ȯ ��: %s", str);

}


int main()
{
	solve();
	return 0;
}