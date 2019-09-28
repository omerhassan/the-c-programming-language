#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 58

/* Exercise 1-14. Write a program to print a histogram of the frequencies of dif-
   ferent characters in its input. */
int main() {
	int c, state, i, j;
	int frequenciesChar[MAX];      //the Frequencies of different charecters.

	state = OUT;
	for (i = 0; i < MAX; ++i)
		frequenciesChar[i] = 0;
	
	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == OUT) {
				state = IN;
			}
		}
		else {
			state = OUT;
			++frequenciesChar[c - 65];
		 }
	}

	for (i = 0; i < MAX; ++i)
		if(frequenciesChar[i] != 0) {
			printf("%c | %d |", i + 65, frequenciesChar[i]);
			for (j = 0; j < frequenciesChar[i]; ++j) {
				printf("*");
			}
			printf("\n");
		}
}
