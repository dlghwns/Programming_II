//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment12.c
//��¥ : 2025-09-26

/* ���ϸ�: Assignment12.c

 * ����: ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� �����ؼ� �����ϴ� 
 * find_all_in_array �Լ��� �ۼ��Ͻÿ�.
 * �� �Լ��� ã�� �׸��� ������ �����Ѵ�.
 * ������� �迭���� 12�� 2�� ã������ 2�� �����ϰ� ã�� �׸��� �ε����� �Ű������� �ε��� �迭�� �����Ѵ�.
 * �׸��� ã�� �� ������ 0�� �����Ѵ�.

 * ��¥: 2025-09-26
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int arr[], int key, int size)
{
    int count = 0;
    int save[10] = { 0 }; // �ִ� 10������ ����

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            save[count] = i; // ���� ã�� �ε����� count ��ġ�� ����
            count++;
        }
    }

    printf("ã�� ����: %d\n", count);

    if (count > 0)
    {
        printf("ã�� �ε���: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d ", save[i]);
        }
        printf("\n");
    }

    return count; // ã�� ���� ��ȯ
}

void solve()
{
    int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
    int size = 10;
    int key;

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("ã�� ��? ");
    scanf("%d", &key);

    find_all_in_array(arr, key, size);
}

int main()
{
    solve();
    return 0;
}
