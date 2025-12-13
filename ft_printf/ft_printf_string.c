/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:40:09 by isarier           #+#    #+#             */
/*   Updated: 2025/11/20 21:16:37 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int ft_printf_string(char *s)
{
    int i;

    i = 0;
    if(!s)
        s = "(null)";
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}