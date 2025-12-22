#include <stdio.h>
void alex(void);
int ipek(char x)
{
	alex();
	if (x == 'a')
	{
		printf("alex");
		return (2);
	}
	else if (x == 'i') 
	{
		printf("ipek");
		return (1);
	}
	return(0);
}

void alex(void)
{
	printf("this is alex\n");
}
