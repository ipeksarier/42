#include <stdio.h>

char ipek(char x);

void	calculate_some_number(int ipek)
{
	int	n = 0;

	while (ipek)
	{
		n =  n + ipek;
		ipek = ipek - 1;
	}
	printf("this is some number i don't know: %d\n", n);
}
int	main(void)
{
	int a;

     	a = ipek('a');

	printf("this is main, ipek returns %d\n", a);
	if (a == 0)
		printf("oh but this one is useless");
	else if (a == 1)
		printf("we like ipek, this one is good");
	else if (a == 2)
		printf("alex stop eating");
	calculate_some_number(a);
	return (0);
}
