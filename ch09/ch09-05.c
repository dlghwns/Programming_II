//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-05.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* �Լ��� : ex09_05
* ���(å��) : ���ڿ��� ����
* ��ȯ : 0
*/
int ex09_05(void)
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);			// �Է¹��� �ܾ ���� ���� ���δ�.
		strcat(sentence, " ");			// �ܾ ������ �� �ֵ��� " "�� ���δ�.
	} while (strcmp(word, ".") != 0);	// "."�� �Էµ� ������ �ݺ��Ѵ�.
	printf("%s\n", sentence);

	return 0;
}

int main()
{
	ex09_05();
	return 0;
}