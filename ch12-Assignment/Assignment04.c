#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
	char id[50];
	char pw[50];
} LOGIN;

void login()
{

	LOGIN users[100];
	int count = 0;

	FILE* fp;
	fp = fopen("c://temp//login.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}


	while (fscanf(fp, "%s %s", users[count].id, users[count].pw) == 2) {
		count++;
		if (count >= MAX) break;
	}
	fclose(fp);


	char input_id[50];
	printf("아이디: ");
	scanf("%s", input_id);

	// 아이디 존재 여부 확인
	int found_index = -1;
	for (int i = 0; i < count; i++) {
		if (strcmp(users[i].id, input_id) == 0) {
			found_index = i;
			break;
		}
	}

	if (found_index == -1) {
		printf("존재하지 않는 아이디입니다.\n");
		return 0;
	}

	char input_pw[50];
	printf("비밀번호: ");
	scanf("%s", input_pw);

	if (strcmp(users[found_index].pw, input_pw) == 0)
		printf("로그인 성공\n");
	else
		printf("비밀번호가 일치하지 않습니다.\n");


}


int main()
{
	login();
	return 0;
}