#include <stdio.h>

int gcd(int, int);
int factorial(int);
int fibonacci(int);
int get_int();
int binary_to_decimal(int bin);


int main()
{
	printf("gcd(18, 6) : %d\n", gcd(18, 6));
	printf("factorial(6) : %d\n", factorial(6));
	printf("fibonacci(6) : %d\n", fibonacci(6));
	printf("enter a number: \n");
	printf("get_int() : %d\n", get_int());
	printf("binary_to_decimal(1010) : %d\n", binary_to_decimal(1010));
	return 0;
}

int gcd(int a, int b)
{
	int temp;
	while (b != 0) {
		temp = a;
		a = b;
		b = a % b;
	}
	return a;
}

int factorial(int n)
{
	int fact = 1;
	for (; n > 0; n--) {
		fact *= n;
	}
	return fact;
}

int fibonacci(int n)
{
	int temp, a, b;
	a = b = 1;
	for (; n > 1; n--) {
		temp = a;
		a = b;
		b = temp + b;
	}
	return a;
}

int get_int()
{
	int number = 0;
	char c;
	while ((c = getchar()) != '\n') {
		number = number * 10 + c - '0';
	}
	return number * 2;
}

int binary_to_decimal(int bin)
{
	int decimal = 0;
	int power = 1;
	int num;
	while (bin / 10 != 0) {
		num = bin % 10;
		decimal = decimal + num * power;
		bin = bin / 10;
		power = power * 2;
	}
	num = bin % 10;
	decimal = decimal + num * power;
	return decimal;
}
