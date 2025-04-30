

#include "ft_printf.h"

float average (int num, ...)
{
    int total;
    va_list ap;

    total = 0;
    va_start(ap, num);
    int i = 0;
    while (i < num)
    {
        total += va_arg(ap, int);
        i++;
    }
    va_end(ap);
    return ((float)total / num);
}

int main()
{
    average(5, 1, 2, 3, 4, 5);
}
