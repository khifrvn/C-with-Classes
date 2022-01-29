#include <stdio.h>

int main()
{
	int a, b;
	char operator;
	
	printf("Masukan operator(+,-,*,/): ");
	scanf("%c", &operator);
	
	printf("Masukan nilai pertama: ");
	scanf("%d", &a)
	printf("Masukan nilai kedua: ");
	scanf("%d", &b)
	
	if (operator=='+')
	{
		int hasil1 = a + b;
		printf("%d", hasil1);
	} else if (operator=='-'){
		int hasil2 = a - b;
		printf("%d", hasil2);
	} else if (operator=='*'){
		int hasil3 = a * b;
		printf("%d", hasil3;
	} else if (operator=='/'){
		int hasil4 = a / b;
		printf("%d", hasil4);
	} else {
		printf("Operator Salah");
	}	
}