#include <stdio.h>
#define MAXLINE 1000	 /* maximum input line size */

int getlineA(char line[], int maxline);
void copy(char to[], char from[]);

/* Exercise 1-16. Revise the main rotuine of the longest-line program so it will
   correctly print the length of arbitary long input lines, and as much as possible
   of the text.  */
int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getlineA(line, MAXLINE)) > 0)
	{
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%d | %s", max, longest);
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

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
