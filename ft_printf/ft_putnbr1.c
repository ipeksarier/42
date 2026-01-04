/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:47:18 by isarier           #+#    #+#             */
/*   Updated: 2025/11/23 20:33:57 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	unsigned int number;
	int 		count;
	char		c;

	c = 0;
	count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		number = -n;
	}
	else
		number = n;
	if (n >= 10)
		count = count + ft_putnbr(number / 10);
	c = number % 10 + '0';
	count++;
	write(1, &c, 1);
	count++;
	return (count);
}

int main() 
{
    int number = 1234;
    ft_putnbr(number);
    return 0;
}