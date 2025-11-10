#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count()
{
    char filename[100];
    printf("파일 이름 : ");
    scanf("%s", filename);

    char fullpath[200];
    sprintf(fullpath, "c://temp//%s.txt", filename);

    FILE* fp = fopen(fullpath, "r");
    if (fp == NULL)
    {
        printf("파일 열기 실패\n");
        return;
    }

    int count[26] = { 0 };
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
        if (isalpha(ch)) {
            ch = tolower(ch);
            count[ch - 'a']++;
        }
    }

    fclose(fp);
    printf("\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0)
            printf("%c : %d  ", 'a' + i, count[i]);
    }
}

int main()
{
    count();
    return 0;
}



