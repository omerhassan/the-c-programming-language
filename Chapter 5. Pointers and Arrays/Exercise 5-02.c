#include <ctype.h>

int getch(void);
void ungetch();

/* Exercise 5-2. Write getfloat, the floating-point analog of getint. What
   type does getfloat return as its function value? */

int getfloat(float *pn)
{
    int c, sign;
    double power;

    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0.0; isdigit(c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
    if (c == '.')
        c = getch();
    for (power = 1.0; isdigit(c); c = getch()) {
        *pn = 10.0 * *pn + (c - '0');
        power *= 10.0;
    }
    *pn = sign * (*pn / power);
    if (c != EOF)
        ungetch(c);
    return c;
}