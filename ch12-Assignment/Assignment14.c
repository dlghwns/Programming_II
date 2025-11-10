#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void solve()
{
    char file1[100], file2[100], savefile[100];
    FILE* fp1, * fp2, * fp3;
    int n1, n2;

    printf("첫 번째 파일명? ");
    scanf("%s", file1);

    fp1 = fopen(file1, "rb");
    if (fp1 == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    fread(&n1, sizeof(int), 1, fp1);
    int* arr1 = (int*)malloc(sizeof(int) * n1);
    fread(arr1, sizeof(int), n1, fp1);
    fclose(fp1);
    printf("정수 %d개를 읽었습니다.\n\n", n1);

    printf("두 번째 파일명? ");
    scanf("%s", file2);

    fp2 = fopen(file2, "rb");
    if (fp2 == NULL) {
        printf("파일 열기 실패\n");
        free(arr1);
        return 1;
    }

    fread(&n2, sizeof(int), 1, fp2);
    int* arr2 = (int*)malloc(sizeof(int) * n2);
    fread(arr2, sizeof(int), n2, fp2);
    fclose(fp2);
    printf("정수 %d개를 읽었습니다.\n\n", n2);

    // 두 배열 합치기
    int total = n1 + n2;
    int* merged = (int*)malloc(sizeof(int) * total);
    for (int i = 0; i < n1; i++) merged[i] = arr1[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    // 정렬
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (merged[i] > merged[j]) {
                int tmp = merged[i];
                merged[i] = merged[j];
                merged[j] = tmp;
            }
        }
    }

    printf("저장할 파일명? ");
    scanf("%s", savefile);

    fp3 = fopen(savefile, "wb");
    if (fp3 == NULL) {
        printf("파일 저장 실패\n");
        free(arr1);
        free(arr2);
        free(merged);
        return 1;
    }

    fwrite(&total, sizeof(int), 1, fp3);
    fwrite(merged, sizeof(int), total, fp3);
    fclose(fp3);

    printf("정수 %d개를 저장했습니다.\n", total);

    free(arr1);
    free(arr2);
    free(merged);


}

int main() {
    solve();
    return 0;
}