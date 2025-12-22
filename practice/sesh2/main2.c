#include <unistd.h>

int	main(void)
{
	char *a = "hello, ipek. how are you today?";
	int i;

	i = 0;
	while (a[i])
		write(1, &a[i++], 1);
/*
	{
		write(1, &a[i], 1);
		i++;
	}
*/
	return (0);
}
