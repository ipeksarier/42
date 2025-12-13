/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:46:12 by isarier           #+#    #+#             */
/*   Updated: 2025/12/06 19:15:07 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_print_str(char *str)
{
    while (*str != '\0')
    {
        write (1, str, 1);
        str++;
    }
    return (0);
}

int main()
{
    char str[] = "ipek";
    ft_print_str(str);
    return (0);
}