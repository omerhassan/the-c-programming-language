/* Exercise 5-4. Write the function strend(s,t), which returns 1 if the string
   t occurs at the end of the string s, and zero otherwise. */

int strend(char *s, char *t)
{
    char *ps = s, *pt = t;

    while (*ps++ != '\0')
        ;

    while (*pt++ != '\0')
        ;

    for (; *(s = (ps - (pt-t))) == *t ; s++, t++) {
        if (*s == '\0')
            return 1;
    }
    return 0;
}