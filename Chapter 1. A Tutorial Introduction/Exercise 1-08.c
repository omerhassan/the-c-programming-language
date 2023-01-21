#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
int main() {
	int c, blank, tab, newline;
	
	blank = 0;
	tab = 0;
	newline = 0;
	
	while ((c = getchar()) != EOF){
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("Blanks : %d, Tabs : %d, New lines : %d\n", blank, tab, newline);
	
}
