/* Exercise 5-3. Write a pointer version of the function strcat that we showed
   in chapter 2: strcat(s,t) copies the string t to the end of s. */

void strcat(char *s, char *t)
{
    while (*s != '\0')
        s++;
    while (*s++ = *t++)
        ;   
}