#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c != '\0')
    {
        write(1, &c[i], i);

    }
}
/*int main(void)
{
    char    *s;
    int     i;
    
    i = 0;
    s = "ipek";

    while(s[i])
    {
        write(1, &s[i], 1);
        i = i + 1;
        
    }
    return (0);
}*/
