#include <unistd.h>

void	ft_print(int a, int b, int c) // a = 3, b = 1;
{
	write(1, "hello", 5);
	while (a + c > b)
	{
		write (1, "ipek\n", 5);
		a = a + 1;
	}
}

int	main(void)
{
	int y;
	int z;
	int t;

	y = 1;
	z = 5;
	t = 8;
	ft_print(y, z, t);
		return (0);
}
