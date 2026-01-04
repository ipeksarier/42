/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 16:38:44 by isarier           #+#    #+#             */
/*   Updated: 2026/01/04 16:50:49 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (ft_print_str("(nil)"));
	address = (unsigned long)ptr;
	count = 0;
	count += ft_print_str("0x");
	count += ft_print_hex(address, 0);
	return (count);
}

#include <stdio.h>
int main (void)
{
    char *s = "ipek";
    
    printf("%p\n", s);
    ft_print_pointer(s);
    return(0);
}
