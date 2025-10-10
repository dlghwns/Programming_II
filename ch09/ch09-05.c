//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-05.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
* 함수명 : ex09_05
* 기능(책임) : 문자열의 연결
* 반환 : 0
*/
int ex09_05(void)
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);			// 입력받은 단어를 문장 끝에 붙인다.
		strcat(sentence, " ");			// 단어를 구분할 수 있도록 " "을 붙인다.
	} while (strcmp(word, ".") != 0);	// "."이 입력될 때까지 반복한다.
	printf("%s\n", sentence);

	return 0;
}

int main()
{
	ex09_05();
	return 0;
}