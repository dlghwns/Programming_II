//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : Assignment17.c
//��¥ : 2025-10-03
//��3


/* ���ϸ�: Assignment17.c

 * ����: �Է¹��� �뷡 ������ �ִ� 20�� �����ϰ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �뷡 ������ ���̴� �ִ� 40���ڶ�� �����Ѵ�. ������ �޴��� �뷡 ������ �߰��ϴ� ���,
 * �뷡 ������ �����ϴ� ���, �뷡 ����� ����ϴ� ����� �����Ѵ�.

 * �ۼ���: ��ȣ��

 * ��¥: 2025-10-03
 * ����: v1.1
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char songs[20][41] = { "" }; //�뷡 ���� �ִ� 20��, �� ������ �ִ� 40���� + null����

/*
 * �Լ��� : add_song()
 * ���(å��) : �뷡 ������ �߰�
 * ��ȯ : ����
 */
void add_song(int* count)
{
    if (*count >= 20)
    {
        printf("�� �̻� �뷡�� �߰��� �� �����ϴ�.\n");
        return;
    }
    else
    {
        char tempname[41];
        printf("�뷡 ���� ? ");
        getchar(); // �Է� ���ۿ� ���� �ִ� ���� ����
        fgets(tempname, sizeof(tempname), stdin);

        // fgets�� ���� ���� �����ϹǷ� ����
        tempname[strcspn(tempname, "\n")] = '\0';

        strcpy(songs[*count], tempname);
        (*count)++;
    }
}

/*
 * �Լ��� : edit_song()
 * ���(å��) : ��ϵ� �뷡 ������ ����
 * ��ȯ : ����
 */
void edit_song(int count)
{
    if (count == 0)
    {
        printf("��ϵ� �뷡�� �����ϴ�.\n");
        return;
    }

    char tempname[41];
    printf("ã�� �뷡 ����? ");
    getchar(); // ���� ����
    fgets(tempname, sizeof(tempname), stdin);
    tempname[strcspn(tempname, "\n")] = '\0';

    for (int i = 0; i < count; i++)
    {
        if (strcmp(songs[i], tempname) == 0)
        {
            printf("������ ����? ");
            fgets(tempname, sizeof(tempname), stdin);
            tempname[strcspn(tempname, "\n")] = '\0';
            strcpy(songs[i], tempname);
            printf("���� �Ϸ�!\n");
            return;
        }
    }
    printf("ã�� �뷡�� �����ϴ�.\n");
}

/*
 * �Լ��� : list_songs()
 * ���(å��) : ��ϵ� �뷡 ������ ��� ���
 * ��ȯ : ����
 */
void list_songs(int count)
{
    if (count == 0)
    {
        printf("��ϵ� �뷡�� �����ϴ�.\n");
        return;
    }
    else
    {
        printf("<< �뷡 ��� >>\n");
        for (int i = 0; i < count; i++)
        {
            printf("%d. %s\n", i + 1, songs[i]);
        }
    }
}

/*
 * �Լ��� : solve()
 * ���(å��) : �޴��� ������ְ� ������� ���ÿ� ���� �뷡 �߰�, ����, ��� ��� ����� ó��
 * ��ȯ : ����
 */
void solve()
{
    int mc;
    int count = 0;
    while (1)
    {
        printf("\n�뷡 �� : %d\n", count);
        printf("[ 0.���� 1.�߰� 2.���� 3.��� ] ����? ");
        scanf("%d", &mc);

        switch (mc)
        {
        case 0:
            printf("���α׷� ����\n");
            return;

        case 1:
            add_song(&count);
            continue;

        case 2:
            edit_song(count);
            continue;

        case 3:
            list_songs(count);
            continue;

        default:
            printf("�߸��� �����Դϴ�.\n");
            continue;
        }
    }
}

int main()
{
    solve();
    return 0;
}
