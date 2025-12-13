/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:37:26 by isarier           #+#    #+#             */
/*   Updated: 2025/11/29 19:43:39 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf_char(char c)
{
    write(1, &c, 1);
    return (0);
}
/*int main(void)
{
    ft_printf_char('c');
}*/