#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



void open_file()
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

    char line[256];
    int line_count = 1;

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%d: %s", line_count, line);
        line_count++;
    }

    fclose(fp);
}

int main()
{
    open_file();
    return 0;
}
