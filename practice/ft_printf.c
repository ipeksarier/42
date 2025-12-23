/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:50:54 by isarier           #+#    #+#             */
/*   Updated: 2025/12/23 16:40:16 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i])
		i++;
	return(i);
}





void ft_printf(char *c)
{
	write(1, c, ft_strlen(c));
}




int	main(void)
{
	ft_printf("hey");
	return (0);
}
