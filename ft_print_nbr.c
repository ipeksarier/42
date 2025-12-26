/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:35:06 by isarier           #+#    #+#             */
/*   Updated: 2025/12/26 22:06:31 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_nbr(int a)
{
	int 	i;
	int	c;
	char	b; 

	i = 0;
	if (a < 0)
	{
		write(1, "-", 1);
		i++;
		a = -a; // or n = -n? which one
	}
	else
		a = a; 
	while (a >= 10)
	{
		c = a / 10;
		i++;
		b = (a % 10) + '0';
		write(1, &b, 1);
		i++;
	}
	return (i); // this is alwayns an issue
}

int	main(void)
{
	ft_print_nbr(1234);
}
