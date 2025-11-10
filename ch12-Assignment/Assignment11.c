#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[30];
} CONTACT;

void search_contacts() {
    char filename[100];
    printf("파일명 입력: ");
    scanf("%s", filename);

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return;
    }

    int count = 0;
    char temp[100];
    while (fgets(temp, sizeof(temp), fp) != NULL) {
        if (strlen(temp) > 1)
            count++;
    }

    rewind(fp);

    CONTACT* list = (CONTACT*)malloc(sizeof(CONTACT) * count);
    if (list == NULL) {
        printf("메모리 할당 실패\n");
        fclose(fp);
        return;
    }

    for (int i = 0; i < count; i++) {
        fscanf(fp, "%s %s", list[i].name, list[i].phone);
    }
    fclose(fp);

    printf("%d개의 연락처를 로딩했습니다.\n", count);

    // 이름을 반복적으로 입력받음
    char search[50];
    while (1) {
        printf("이름? ");
        scanf("%s", search);

        if (strcmp(search, ".") == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(list[i].name, search) == 0) {
                printf("%s의 전화번호로 %s로 전화를 겁니다.\n", list[i].name, list[i].phone);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("연락처를 찾을 수 없습니다.\n");
    }

    free(list);
}

int main() {
    search_contacts();
    return 0;
}


