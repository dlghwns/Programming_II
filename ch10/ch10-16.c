//�й�: 202511229
//�̸�: ��ȣ��
//���α׷� �� : ch10-16.c
//��¥ : 2025-10-06
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];	// rgb[0]�� red, rgb[1]�� blue, rgb[2]�� green,
	// rgb[3]�� not used
} COLOR_T;


/*
* �Լ��� : ex10_16
* ���(å��) : ����ü�� rgb�� ǥ��
* ��ȯ : 0
*/
int ex10_16(void)
{
	COLOR_T c1;

	c1.rgb[0] = 0xFF;		// red
	c1.rgb[1] = 0xAB;		// green
	c1.rgb[2] = 0x1F;		// blue
	c1.rgb[3] = 0x0;		// not used

	printf("rgb color = %08X\n", c1.color);		// 32��Ʈ �����ͷ� ����Ѵ�.

	return 0;
}


int main()
{
	ex10_16();
	return 0;
}