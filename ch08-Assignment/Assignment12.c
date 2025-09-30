//학번: 202511229
//이름: 이호준
//프로그램 명 : Assignment12.c
//날짜 : 2025-09-26

/* 파일명: Assignment12.c

 * 내용: 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리턴하는 
 * find_all_in_array 함수를 작성하시오.
 * 이 함수는 찾은 항목의 개수를 리턴한다.
 * 에를들어 배열에서 12를 2개 찾았으면 2를 리턴하고 찾은 항목의 인덱스는 매개변수인 인덱스 배열에 저장한다.
 * 항목을 찾을 수 없으면 0을 리턴한다.

 * 날짜: 2025-09-26
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int arr[], int key, int size)
{
    int count = 0;
    int save[10] = { 0 }; // 최대 10개까지 저장

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            save[count] = i; // 현재 찾은 인덱스를 count 위치에 저장
            count++;
        }
    }

    printf("찾은 개수: %d\n", count);

    if (count > 0)
    {
        printf("찾은 인덱스: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d ", save[i]);
        }
        printf("\n");
    }

    return count; // 찾은 개수 반환
}

void solve()
{
    int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
    int size = 10;
    int key;

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("찾을 값? ");
    scanf("%d", &key);

    find_all_in_array(arr, key, size);
}

int main()
{
    solve();
    return 0;
}
