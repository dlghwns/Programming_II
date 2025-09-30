//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-07.c
//날짜 : 2025-09-26

#include <stdio.h>


int ex08_07(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];	// arr[0]의 주소를 p에 저장할 수 있다.

	int i;

	for (i = 0; i < 5; i++) {
		printf("p + %d = %p", i, p + i);			// arr[i]의 주소를 출력
		printf("*(p + %d) = %d\n", i, *(p + i));	// arr[i]를 출력
	}

	return 0;
}

int main()
{

	ex08_07();
	return 0;
}