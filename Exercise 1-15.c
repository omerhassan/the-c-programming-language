#include <stdio.h>

float temperature(int n);

/* Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
    use a function for conversion. */
int main()
{
	int i;

	for (i = 0; i <= 300; i = i + 20)
		printf("%3d %6.1f\n", i, temperature(i));
	return 0;
}

float temperature(int fahr)
{
	float celsius;

	celsius = (5.0/9.0)*(fahr-32);
	return celsius;
}
