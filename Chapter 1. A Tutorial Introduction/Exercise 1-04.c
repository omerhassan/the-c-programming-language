#include <stdio.h>

/* Exerciese 1-4. Write a program to print the corresponding Celsius to Fahrenheit
   table. */

int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 100;
	step = 10;
	
	printf("cels | fahr\n");
	printf("----   ----\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius) + 32;
		printf("%3.0f  | %4.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
