#include <stdio.h>
#define MAXLINE 1000	 /* maximum input line size */

int getlineA(char line[], int maxline);
int reverse(char s[], int length);
void copy(char to[], char from[]);

/* Exercise 1-19. Write a function reverse(s) that reverses the charecter
   string s. Use it to write a program that reverses its input a line at a time.  */
int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getlineA(line, MAXLINE)) > 1)
	{
		reverse(line, len);
		printf("%s",line);
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

int reverse(char s[], int length)
{
	int i, j;
	char r[MAXLINE];

	copy(r, s);
	j = 0;
	i = length - 2;

	while (j <= length - 2)
	{
		s[j++] = r[i--];
	}
	s[j] = '\n';
	++j;
	s[j] = '\0';
	return j;
}
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
