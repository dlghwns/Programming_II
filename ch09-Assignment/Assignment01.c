//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment01.c
//날짜 : 2025-10-03
//별1

/* 파일명: Assignment01.c

 * 내용: 한 줄의 문자열을 입력받아 공백 문자(' ', '\n','\t','\f','\r','\v')의 개수를 세는 프로그램을 작성하시오.
 
 * 작성자: 이호준

 * 날짜: 2025-10-03
 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



 /*
 * 함수명 : solve()
 * 기능(책임) : 문자열을 입력받는다.
 * 입력받은 문자열에서 공백문자를 찾아 몇개인지 출력해준다.
 * 반환 : 없음
 */
void solve()
{
	int count = 0;
	char str[1000];
	printf("문자열을 입력하세요: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v') {
			count++;
		}
	}


	printf("공백 문자 개수: %d\n", count);

}


int main()
{
	solve();
	return 0;
}