#include <stdio.h>

/* Exercise 2-4. Write an alternate version of squeeze(s1,s2) that deletes
   each character in s1 that matches any character in the string s2 */

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for (k = 0; s2[k] != '/0'; k++) {
        for (i = j = 0; s[i] != '/0'; i++)
            if (s1[i] != s2[k])
                s1[j++] = s[i];
        s1[j] = '/0';
    }
} 