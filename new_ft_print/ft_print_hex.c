/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:35:44 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 17:52:17 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex(unsigned int a, char c)
{
    int i;
    char *b;

    i = 0;
    if (c == 'x')
        b = "0123456789abcdef";
    else 
        base = "0123456789ABCDEF";
}