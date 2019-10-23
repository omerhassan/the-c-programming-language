#include <stdio.h>

#define MAXLINE 1000	 /* maximum input line size */

/* for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 

/* Exercise 2-2. Write a loop equivalent to the for loop above without using &&
   or ||. */
int main()
{
	int i, c, lim = MAXLINE, s[MAXLINE];

	for (i=0; (i<lim-1) * ((c=getchar()) != '\n') * (c != EOF); ++i)
		s[i] = c;
}