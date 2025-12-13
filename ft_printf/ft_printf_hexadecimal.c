/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:54:36 by isarier           #+#    #+#             */
/*   Updated: 2025/11/29 19:56:54 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_printf_hexadecimal(int c)
{
    write(1, &c, 16);
    return (0);
}
int main()
{
    printf("%x", "0123456789abcdef");
}