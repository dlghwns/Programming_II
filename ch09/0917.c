//학번: 202511229
//이름: 이호준
//프로그램 명 : 연습문제/실습
//날짜 : 09/17

#include <stdio.h>
void* swapdouble(double* pa, double* pb);
int  test_print_array();
int test_swapdouble();
int test_funtion_pointer();
int main()
{

	//test_swapdouble();
	//test_print_array();
	test_funtion_pointer();

	return 0;
}


int test_swapdouble()
{
	double a = 3.14;
	double b = 5.12;


	double* presult = (double*)swapdouble(&a, &b);
	if (presult == NULL)
	{
		printf("1뭔가 잘못됨\n");

	}
	else {
		printf("a = %f, b = %f\n", a, b);
	}


	presult = (double*)swapdouble((double*)NULL, &b);
	if (presult == NULL)
	{
		printf("2뭔가 잘못됨\n");

	}
	else {
		printf("a = %f, b = %f\n", a, b);
	}
}

void* swapdouble(double* pa, double* pb)
{
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	double temp = *pa;
	*pa = *pb;
	*pb = temp;

	return pa;
}


void print_array_double(double array[], int size);
void PrintArrayDouble(double* array, int size);
int test_print_array()
{
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	PrintArrayDouble(&da[0], size);

	return 0;
}

//기능: 1차원 실수 배열을 입력받아 콘솔에 출력한다.
//함수명: print_array_double
//입력: double 타입 1차원 배열 주소
// 출력: 터미널에 배열의 내요을 이쁘게 출력
// 반환 : 없음

void print_array_double(double array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lf ", array[i]);
	}
	printf("\n");

}

void PrintArrayDouble(double* array, int size)
{
	for (int i = 0; i < size; i++, array++)
	{
		printf("%lf ", *array);
	}
	printf("\n");

}





//정수 덧셈 결과 반환
//입력 : 두 실수
//출력 : 더한 값
double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mul(double a, double b)
{
	return a * b;
}

int test_funtion_pointer()
{
	double (*pfun)(double a, double b) = NULL;
	double result = 0.0;


	pfun = add;
	printf("add(3,4) = %f\n", add(3.0, 4.0));


	pfun = mul;
	result = (*pfun) (3.0, 4.0);
	printf("(*pfun)(3,4) = %f\n", result);
}