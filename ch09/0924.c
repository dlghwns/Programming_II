	//�й�: 202511229
	//�̸�: ��ȣ��
	//���α׷� �� : ��������/�ǽ�
	//��¥ : 09/24




	/*
	* ���� : Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带
	* �����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* ���ڵ� ���� :  �̸� | �й� | �а� | �г�(����)
	*  �Է� ���� ���� : exit �Է�.
	*/
	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <ctype.h>


	struct Student{
		char name[20];
		char id[32];
		char major[32];
		int grade;
	};


	void getinfo();
	void print_info(struct Student s);
	char* ltrim(char* str);
	char* rtrim(char* str);
	char* trim(char* str);

	int main()
	{
		getinfo();	//�Է� ���� �ޱ�.

		return 0;
	}

	void print_info(struct Student s)
	{
		printf("�̸� : %s\n", trim(s.name));
		printf("�й� : %s\n", trim(s.id));
		printf("�а� : %s\n", trim(s.major));
		printf("�г� : %d\n", s.grade);
	}

	void getinfo()
	{
		char c[200];
		printf("�Է� : �̸� | �й� | �а� | �г�(����)\n");
		gets_s(c, sizeof(c));
	
		if (strcmp(c, "exit") == 0) {
			printf("����");
			exit(1);
		}
		else  //���� ��ū ������
		{
			struct Student s;
			char* token = NULL;
			token = strtok(c, "|");
			strcpy(s.name, token);
			token = strtok(NULL, "|");
			strcpy(s.id, token);
			token = strtok(NULL, "|");
			strcpy(s.major, token);
			token = strtok(NULL, "|");
			s.grade = atoi(token);
			print_info(s); //������ִ� �Լ� ����
		}



	}



#pragma region trim
	char* rtrim(char* str)
	{
		if (str == NULL) return NULL;

		int len = strlen(str);
		if (len == 0) return str;

		char* end = str + len - 1;
		while (end >= str && isspace((unsigned char)*end))
		{
			*end = '\0';
			end--;

		}
		return str;
	}

	char* ltrim(char* str)
	{
		if (str == NULL) return NULL;

		while (*str && isspace((unsigned char)*str))   //isspace �ȿ� �ѱ۰����� ����(����) ���� �߻�. unsighed char �� ����ó�� �ȵǰ� �Ͽ� �ذ�
		{
			str++;
		}

		return str;
	}


	char* trim(char* str)
	{
		if (str == NULL) return NULL;

		rtrim(str);
		return ltrim(str);

	}
#pragma endregion

	

