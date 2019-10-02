#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLINE 1000	 /* maximum input line size */

int getlineA(char line[], int maxline);

/* Exercise 1-18. Write a program to remove trailing and tabs from each
   line of input, and to delete entierly blank liens.  */
int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getlineA(line, MAXLINE)) > 0)
			if (len > 1)
        		printf("%s", line);
		
	return 0;
}

int getlineA(char s[], int lim)
{
	int c, i, state;

	state = OUT;
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n';) {
		if (c == ' ' || c == '\t') {
			if (state == OUT) {
				state = IN;
				s[i] = ' ';
				++i;
			}
		}
		else {		
			state = OUT;
			s[i] = c;
			++i;
		}
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
