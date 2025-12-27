/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:36:01 by isarier           #+#    #+#             */
/*   Updated: 2025/12/27 22:03:45 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int 
int	ft_print_new(int a)
{
	int 	i;
	int     c;
	char	b;

	i = 0;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	while (a >= 10) // this while loop counts how many digits in c
	{
		c = a / 10;
        b = a % 10 + '0';
        write(1, &b, 1);
        a = c;
		i++;
	}
    b = a;
    b = a % 10 + '0';
    write(1, &b, 1);
	return (i);
}

int	main(void)
{
	ft_print_new(1234);
}