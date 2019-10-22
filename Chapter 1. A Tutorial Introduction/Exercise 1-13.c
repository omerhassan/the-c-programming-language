#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 10

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in
	its input. it is easy to draw the histogram with the bars horizontal; a vertical
	oriantaion is more challenging. */
int main() {
	int c, state, i, j;
	int lengthOfWord[MAX];

	state = OUT;
	for (i = 0; i < MAX; ++i)
		lengthOfWord[i] = 0;
	i = 0;
	
	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == OUT) {
				state = IN;
				++i;
			}
		}
		else {
			state = OUT;
			++lengthOfWord[i];
		 }
	}
	for (i = 0; i < MAX; ++i) {
		if (lengthOfWord[i] != 0) {
			printf("word %d :", i);
			for (j = 0; j < lengthOfWord[i]; ++j) {
				printf("*");
			}	
			printf("\n");
		}
	}
}
