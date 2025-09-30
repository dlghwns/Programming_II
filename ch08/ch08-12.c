//학번: 202511229
//이름: 이호준
//프로그램 명 : ch08-12.c
//날짜 : 2025-09-26

#include <stdio.h>

int ex08_12(void)
{
	int data[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7 ,8 ,9, 10},
		{11, 12, 13, 14, 15}
	};
	int(*p)[5] = &data[0];		
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d ", p[i][j]);	
		printf("\n");
	}

	return 0;
}
int main()
{
	ex08_12();
	return 0;
}