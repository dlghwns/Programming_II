#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void save_to_text(const char* filename, int* arr, int n) {
    char txtname[120];
    sprintf(txtname, "%s.txt", filename);

    FILE* fp = fopen(txtname, "w");
    if (fp == NULL) {
        printf("텍스트 파일 생성 실패\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);
}


void save_to_binary(const char* filename, int* arr, int n) {
    char datname[120];
    sprintf(datname, "%s.dat", filename);

    FILE* fp = fopen(datname, "wb");
    if (fp == NULL) {
        printf("2진 파일 생성 실패\n");
        return;
    }

    fwrite(&n, sizeof(int), 1, fp);
    fwrite(arr, sizeof(int), n, fp);

    fclose(fp);
}

int main() {
    int N;
    char filename[100];

    printf("정수의 개수? ");
    scanf("%d", &N);
    printf("파일명? ");
    scanf("%s", filename);
    int* arr = (int*)malloc(sizeof(int) * N);
    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100 + 1;
    }


    save_to_text(filename, arr, N);
    save_to_binary(filename, arr, N);

    printf("%s.txt와 %s.dat를 생성했습니다.\n", filename, filename);

    free(arr);
    return 0;
}


