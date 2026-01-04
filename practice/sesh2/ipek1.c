#include<unistd.h>

int ft_print(int a, int b, int c)
{
	while (a + b < c && a < b)
	{
		write(1, "ipek can do it", 15);
		a = b + c;
	}
	return (0);
}

int main (void)
{
	ft_print(2, 3, 6);
}

