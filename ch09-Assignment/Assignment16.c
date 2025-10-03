//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment16.c
//날짜 : 2025-10-03
//별3

/* 파일명: Assignment16.c

 * 내용: 인터넷 싸이트에 로그인하려는 사용자로부터 아이디와 패스워드를 입력받아 로그인 과정을 처리하려고 한다.
 * 사용자 5명의 아이디와 패스워드가 이미 등록되어 있을 때, 입력받은 아이디에 해당하는 패스워드와 사용자가 입력한 패스워드가 일치하면
 * 로그인을 허용하는 프로그램을 작성하시오.
 * 사용자가 입력한 아이디가 존재하지 않거나, 
 * 아아디에 해당하는 패스워드가 일치하지 않으면 에러 메시지를 출력 후 아이디와 패스워드를 다시 입력받게 한다.
 * 3번의 재시도 후에도 올바른 아이디와 패스워드를 입력하지 못하면 로그인 실패 에러 메시지를 출력한다. 
 * 아이디 문자열 배열과 패스워드 문자열 배열은 마음대로 정해서 사용한다.

 * 작성자: 이호준

 * 날짜: 2025-10-03
 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char login_ids[10][20] = {"user1", "us1", "user2", "us2", "user3", "us3", "user4", "us4", "user5", "us5"};
//아이디는 0 2 4 6 8 짝수번째,
//패스워드는 1 3 5 7 9 홀수번째




 /*
 * 함수명 : check()
 * 기능(책임) : 아이디와 패스워드를 입력받아 로그인 가능여부를 판단
 * 반환 : 0(로그인 성공), 1(로그인 실패)
 */
int check(char id[], char pw[])
{

	//아이디 먼저 체크.
	for (int i = 0; i < 10; i+=2)
	{
		if (strcmp(login_ids[i], id) == 0) {//아이디가 같으면 
			//아이디 일치.


			if (strcmp(login_ids[i + 1], pw) == 0) {//패스워드 체크
				//패스워드 일치.
				return 0; //로그인 성공
			}
			else
			{
				printf("패스워드가 틀렸습니다.\n");
				return 1;
			}


		}
		else
		{
			printf("해당ID가 없습니다.\n");
			return 1;
		}
	}

	return 0;
}



 /*
 * 함수명 : solve()
 * 기능(책임) : 아이디와 패스워드를 입력받아 로그인 과정을 처리
 * 반환 : 없음
 */
void solve()
{
	int wrong = 0; //max - 3

	char id[100];
	char pw[100];


	while (1)
	{
		if (wrong >= 3)
		{
			printf("로그인 실패\n");
			break;
		}


		printf("ID?");
		scanf("%s", id);
		printf("PW?");
		scanf("%s", pw);
		

		int re = check(id, pw);
		if (re == 1)
		{
			wrong++;
			continue;
		}
		else if (re == 0)
		{
			printf("로그인 성공!\n");
			break;
		}

	}


}


int main()
{
	solve();
	return 0;
}