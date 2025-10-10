//학번: 202511229
//이름: 이호준
//프로그램 명 : ch09-10.c
//날짜 : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 처리 라이브러리
#include <ctype.h>  // 문자 처리 라이브러리
int count_space(const char* s);


/*
* 함수명 : ex09_10
* 기능(책임) : 공백	문자의 개수 세기
* 반환 : 0
*/
int ex09_10(void)
{
	char str[64] = "this program\ttest const pointer to string\n";

	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));
	return 0;
}
/*
* 함수명 : ount_space
* 기능(책임) : 문자열 s에서 공백 문자의 개수를 세어 반환한다.
* 반환 : 공백 문자의 개수
*/
int count_space(const char* s) // s는 입력 매개변수
{
	int count = 0;
	while (s[0] != '\0') {	// while (*s != '\0') 과 같은 의미
		if (isspace(s[0]))	// *s가 공백 문자인지 검사한다.
			count++;
		s++;				// s는 다음 문자를 가리킨다.
	}

	//s[0] = 'A';		// s가 가리키는 문자열을 변경할 수 없으므로 컴파일 에러
	//strcpy(s, "xyz");	// strcpy의 매개변수와 데이터형이 다르므로 컴파일 경고
	return count;
}

int main()
{
	ex09_10();
	return 0;
}