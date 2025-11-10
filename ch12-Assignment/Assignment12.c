#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[30];
} CONTACT;

// 새 연락처를 파일에 저장하는 함수
void save_contact_to_file(const char* filename, const char* name, const char* phone) {
    FILE* fp = fopen(filename, "a"); // append 모드
    if (fp == NULL) {
        printf("파일 저장 실패\n");
        return;
    }
    fprintf(fp, "%s %s\n", name, phone);
    fclose(fp);
    printf("연락처가 등록되었습니다.\n");
}

void load_and_search_contacts() {
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

        if (!found) {
            char choice;
            printf("연락처를 찾을 수 없습니다. 등록하시겠습니까? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                char new_phone[30];
                printf("전화번호 입력: ");
                scanf("%s", new_phone);
                save_contact_to_file(filename, search, new_phone);
            }
        }
    }

    free(list);
}

int main() {
    load_and_search_contacts();
    return 0;
}
