#include <stdio.h>

/* Verfiy that the expression getchar() != EOF is 0 or 1. */
int main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);
	return 0;
}
