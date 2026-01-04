/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:35:44 by isarier           #+#    #+#             */
/*   Updated: 2026/01/04 16:50:04 by isarier          ###   ########.fr       */
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

// printf("%x", 0)

// else if c == x
// ft_print_hex(va_arg(args, unsigned int), 1)

// else if c == X
// ft_print_hex(va_arg(args, unsigned int), 0)
int ft_print_digit(unsigned long a, char *base)
{
    char *b;
    int i;

    i = 0;
    b = malloc(32); // enough space, simple and safe
    if (!b) // b -- (b != 0) is the default condition and !b -- !(b != 0) is not default condition so check if its null/0
        return (0);
    while (a > 0)
    {
        b[i] = base[a % 16];
        a = a / 16;
        i++;
    }
    b[i] = '\0'; // end with null terminator
    ft_reverse(b);
    free(b);
    return (i);
}

int ft_print_hex(unsigned long a, int upperorlower)
{
    char *base;
   
    if (upperorlower == 0)
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (a == 0)
    {
        write(1, "0", 1);
        return (1); // how many characters were printed
    }
    return (ft_print_digit(a, base));
}


/*#include <stdio.h>
int	main(void)
{
	// ft_print_hex(1234501248, 0);
    char    *s = "asd";

    printf("%p\n", s);
    return(0);
}*/