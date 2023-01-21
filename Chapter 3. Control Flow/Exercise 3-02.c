#include <stdio.h>
#define MAX 1000

/* Exercise 3-2. Write a function escape(s, t) that converts characters like
   newline and tab into visible escape sequences like \n \t as it copies the
   string t to s. Use a swith. Write a function for the other direction as well,
   converting escape sequences into the real characters. */

int escape(char s[], char t[])
{
	int i, j;

	i = 0;
	j = 0;
	while((s[j] = t[i]) != '\0'){
		switch (s[j]) {
			case '\t':
				s[j] = '\\';
				s[++j] = 't';
				break;
			case '\n':
				s[j] = '\\';
				s[++j] = 'n';
				break;
		}
		j++;
		i++;
	}
	s[j] = '\0';
	return 0;
}