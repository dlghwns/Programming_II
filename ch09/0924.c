	//학번: 202511229
	//이름: 이호준
	//프로그램 명 : 연습문제/실습
	//날짜 : 09/24




	/*
	* 문제 : 키보드로부터 다음 레코드를 한 줄 입력받아 필드를
	* 구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
	* 레코드 형식 :  이름 | 학번 | 학과 | 학년(정수)
	*  입력 종료 조건 : exit 입력.
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
		getinfo();	//입력 먼저 받기.

		return 0;
	}

	void print_info(struct Student s)
	{
		printf("이름 : %s\n", trim(s.name));
		printf("학번 : %s\n", trim(s.id));
		printf("학과 : %s\n", trim(s.major));
		printf("학년 : %d\n", s.grade);
	}

	void getinfo()
	{
		char c[200];
		printf("입력 : 이름 | 학번 | 학과 | 학년(정수)\n");
		gets_s(c, sizeof(c));
	
		if (strcmp(c, "exit") == 0) {
			printf("종료");
			exit(1);
		}
		else  //이제 토큰 나누기
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
			print_info(s); //출력해주는 함수 실행
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

		while (*str && isspace((unsigned char)*str))   //isspace 안에 한글같은거 들어가면(음수) 오류 발생. unsighed char 로 음수처리 안되게 하여 해결
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

	

