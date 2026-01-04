#include <unistd.h>

int ft_putnbr(int n)
{
    char    c;
    long     i;

    i = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        i = i + 1;
        n = -n;
    }

    if (n > 9)
    {
        i = i + ft_putnbr(n/10);
        c = n % 10 + '0';
        write(1, &c, 1);
        i++;
    }
    c = n + '0';
    write(1, &c, 1);
    i++;

    return i;
}

int     main(void)
{
        ft_putnbr(2147483647);
        return 0;
}
