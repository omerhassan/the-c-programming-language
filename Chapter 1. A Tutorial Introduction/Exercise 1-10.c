#include <stdio.h>

/* Exercise 1-10. Write a program to copy its input to its output, replacing each
   tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
   and backspaces visible in an unambiguous way. */
int main() {
	int c, flag;
	
	while ((c = getchar()) != EOF) {
		flag = 0;
		if (c == '\t'){
			putchar('\\');
			putchar('t');
			flag = 1;
		}
		if (c == ' '){
			putchar('\\');
			putchar('b');
			flag = 1;
		}
		if (c == '\\'){
			putchar('\\');
			putchar('\\');
			flag = 1;
		}
		if (flag == 0)
			putchar(c);
	}
	
}
