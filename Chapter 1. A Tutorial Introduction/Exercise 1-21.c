#include <stdio.h>
#define MAXLINE 1000	 /* maximum input line size */
#define TAB 4			/* should be a symbolic parameter*/

int getlineA(char line[], int maxline);
int entab(char to[], char from[]);

/* Exercise 1-21. Write a program entab that replaces stings of blanks by the
   minimum number of tabs and blanks to achieve the same spacing. Use the
   same tab stops as for detab. When either a tab or a single blank would suffice
   to reach a tab stop, which should be given preference?  */
int main()
{
	int len, lenNoTab;
	char line[MAXLINE], deTabLine[MAXLINE];

	while ((len = getlineA(line, MAXLINE)) > 0)
	{
		lenNoTab = entab(deTabLine, line);
		printf("without TABs : %d, with TABs : %d\n",len, lenNoTab);
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

int entab(char to[], char from[])
{
	int i, j, count;

	i = j = count = 0;
	while ((to[j] = from[i]) != '\0') {
		if (to[j] == ' ') {
			++count;
		}
		else {
			count = 0;
		}
		if (count == 4) {
			j = j - 3;
			to[j] = '\t';
			count = 0;
		}
			
			++i;
			++j;
	}
	return j;
}
