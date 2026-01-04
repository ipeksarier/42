/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:36:01 by isarier           #+#    #+#             */
/*   Updated: 2026/01/04 16:05:14 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_strlen(char *x)
{
	int len;

	len = 0;
	while (x[len] != '\0')
	{
		len++;
	}
	return(len);
}

void ft_reverse(char *a)
{
	int i;

	i = ft_strlen(a) - 1;
	while (i >= 0) // a = "hello", i = 0;
	{
		write(1, &a[i], 1);
		i--;
	}
}

int	countdigits(int a)
{
	int	len;

	len = 0;
	while (a > 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}
void	ft_print_nbr(long a)
{
	int 	i; // 
	char	*b; 

	b = malloc(countdigits(a) + 1); // first time you use malloc, changed char b to char *b
	i = 0;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	while (a >= 10) 
	{
        b[i] = a % 10 + '0'; // changed from b to b[i]
		a = a / 10;
		i++;
	}
    b[i++] = a + '0'; // changed from b to b[i]
	b[i] = '\0'; // "12345" to "12345\0"
	ft_reverse(b); // prints b in reverse
	free(b);
}

/*int	main(void)
{
	ft_print_nbr(2147483699);
}*/
