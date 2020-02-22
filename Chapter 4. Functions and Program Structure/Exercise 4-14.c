#include <stdio.h>

#define swap(t, x, y) t = x, x = y, y = t

    
int main()
{
    int x = 5, y = 6, t;

    swap(t, x, y);
    printf("x = %d, y = %d \n", x, y);
}