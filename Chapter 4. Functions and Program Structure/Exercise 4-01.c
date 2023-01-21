#include <stdio.h>

/* Exercise 4-1. Write the function strrindex(s, t), which returns the position
   of the rightmost occurrence of t in s, or -1 if there is none. */
int strindex(char s[], char t[])
{
	int i, j, k, index;

	for (i = 0; s[i] != '\0'; ++i) {
		for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			index = i;
	}
	if (k > 0 && t[k] == '\0')
		return index;
	return -1;
}