/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:41:16 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 16:19:20 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_unsigned(unsigned int x)
{
    char    b;
    int     i;
    unsigned int c;

    i = 0;
    c = x;
    while(c >= 10)
    {
        b = c % 10;
        write(1, &b, 1);
        c = c / 10;
        i++;
    }
    b = x % 10;
    write(1, &b, 1);
    i++;
    return (i);
}

int main(void)
{
    ft_print_unsigned(5874);
    return (0);
}