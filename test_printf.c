#include <stdio.h>
/* Спецификаторы преобразования для функции printf()
 *
 * %a - шестнадцатиричное в виде 0xh.hhhhp+d (C99)
 * %A - шестнадцатиричное в виде 0Xh.hhhhP+d (C99)
 * %c - для отображения символа
 * %s - для отображения стоки
 * %i,d - десятичное целое со знаком
 * %f - десятичное с плавающей точкой (со знаком)
 * %u - десятичное целое без знака
 * %x,X - Шестнадцатеричное без знака (буквы на нижнем, верхнем регистре)
 * %p -	Выводит указатель
 * */

int main(){
// %a, %A - аргумент обязательно должен иметь тип double
	double varhex = 50.65695;
	printf("double varhex = %a - %A\n", varhex, varhex);
/************************************************************/

// %c - аргумент должен иметть тип char
	char A = 'A';
	printf("char A = %c\n", A);

// %s - аргумент должен быть массовом с типом char
	char Arr[] = "Hello Zhan!\n";
	printf("array type char Arr = %s", Arr);

/************************************************************/

// %i, %d - аргумент должен быть int
	int number = 5;
	int num = -24;
	printf("int number = %i, %d\n", number, number);
	printf("int num = %i\n", num);

/**************************************************************/

// %f - аргумент должен быть float, double
	float f = 25.678;
	double d = 245.456;
	float m = -34.56;
	printf("float f = %f\n", f);   
	printf("double d = %f\n", d);   
	printf("float m = %f\n", m);

/***************************************************************/

// %u - аргумент должен быть unsigned int можно и int (но если число положительное)
	int u_number = 25;
	int o_number = -34;
	unsigned int u_int = 234;

	printf("int u_number = %u\n", u_number);
	printf("int o_number = %u\n", o_number);
	printf("unsigned int u_int = %u\n", u_int);

/******************************************************************/

// %x, %X - аргумент должен быть unsigned, int
	unsigned x = 15;
	printf("hex - unsigned x = %x, %X\n", x, x);
/*******************************************************************/

// %p - аргумент должен быть с &
	int var = 5;
	int *p;
	p = &var;
	printf("адрес переменной var -  %p\n", p); //&var
	printf("значение переменной var = %d ,по адресу %p\n", *p, &var);


	return 0;
}

