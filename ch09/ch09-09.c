//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch09-09.c
//��¥ : 2025-10-06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>		//���� ó�� ���̺귯��

/*
* �Լ��� : ex09_09
* ���(å��) : ���ڿ� �����Ͱ� ���� �迭�� ����ų�� ���� �迭�� ����
* ��ȯ : 0
*/
void ex09_09(void)
{
	char str[64] = "";
	char* p = str;		//p�� str�迭�� ����Ų��.

	strcpy(p, "test string");	//p�� ����Ű�� ���� �迭�� �����Ѵ�.

	
	if (islower(p[0]))			//�ܾ��� ù ���ڸ� �빮�ڷ� �ٲ۴�
		p[0] = toupper(p[0]);	//p�� ����Ű�� str0]�� �����Ѵ�.

	p = strchr(p, ' ');			//str�� ' ' ������ �ּҸ� ������ p�� �����Ѵ�.

	if(islower(p[1]))
		p[1] = toupper(p[1]);	// ' ' ���� ���ڸ� �빮�ڷ� �ٲ۴�.

	puts(str);
	return 0;
}

int main()
{
	ex09_09();
	return 0;
}