/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:35:44 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 20:22:56 by isarier          ###   ########.fr       */
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
		a = a / 16;
		len++;
	}
	return (len);
}
int ft_print_hex(unsigned int a, char c)
{
    int i;
    char *base;
    char *b;
    
    i = 0;
    if (c == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (a == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    b = malloc(32); // enough space, simple and safe
    if (!b)
        return (0);

    while (a > 0)
    {
        b[i] = base[a % 16];
        a = a / 16;
        i++;
    }
    b[i] = '\0';
    ft_reverse(b);
    free(b);

    return (i);
}

int	main(void)
{
	ft_print_hex(3735928559, 'X');
    return(0);
}
