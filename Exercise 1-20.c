#include <stdio.h>
#define MAXLINE 1000	 /* maximum input line size */
#define TAB 4		/* should be a symbolic parameter*/

int getlineA(char line[], int maxline);
int detab(char to[], char from[]);

/* Exercise 1-20. Write a program detab that replaces tabs in the input with the
   proper number of blanks to space to the next tab stop. Assume a fixed set of 
   tab stops, say every n columns. Should n be a variable or a symbolic parameter?  */
int main()
{
	int len, lenNoTab;
	char line[MAXLINE], deTabLine[MAXLINE];

	while ((len = getlineA(line, MAXLINE)) > 0)
	{
		lenNoTab = detab(deTabLine, line);
		printf("with TABs : %d, without TABs : %d\n",len, lenNoTab);
		printf("%s", line);
		printf("%s", deTabLine);
	}
	return 0;
}

int getlineA(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int detab(char to[], char from[])
{
	int i, j, n;

	i = j = 0;
	while ((to[j] = from[i]) != '\0') {
		if (to[j] == '\t') {
			for (n = 0; n < TAB; ++n) {
				to[j] = ' ';
				++j;
			}
			--j;      
		}
			++i;
			++j;
	}
	return j;
}
