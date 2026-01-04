#include<unistd.h>

int ft_ipek(int i)
{
	while (i < 6)
	{
		write(1, "42", 2);
		i = i + 2;
	}
	return (0);
}

int main (void)
{
	ft_ipek(2);
}
