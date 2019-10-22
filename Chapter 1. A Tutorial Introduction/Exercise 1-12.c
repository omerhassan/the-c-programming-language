#include <stdio.h>

#define IN 1
#define OUT 0

/* Exercise 1-12. Write a program that prints its input one word per line. */
int main() {
	int c, state;

	state = OUT;

	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == OUT) {
				state = IN;
				printf("\n");
			}
		}
		else {
			state = OUT;
			putchar(c);
		 }
	}
}
