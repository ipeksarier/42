/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:58:30 by isarier           #+#    #+#             */
/*   Updated: 2026/01/04 16:51:45 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>

void	ft_print_chr(char i);
int	    ft_print_str(char *c);
void	ft_print_nbr(long a);
void	ft_print_unsigned_int(unsigned int a);
int     ft_print_hex(unsigned long a, int upperorlower);
int	    ft_print_pointer(void *ptr);


#endif
// int ft_print_hex(unsigned int a, char c)
// {
//     int i;
//     char *base;
//     char *b;
    
//     i = 0;
//     if (c == 'x')
//         base = "0123456789abcdef";
//     else
//         base = "0123456789ABCDEF";

//     if (a == 0)
//     {
//         write(1, "0", 1);
//         return (1);
//     }
//     b = malloc(32); // enough space, simple and safe
//     if (!b)
//         return (0);

//     while (a > 0)
//     {
//         b[i] = base[a % 16];
//         a = a / 16;
//         i++;
//     }
//     b[i] = '\0';
//     ft_reverse(b);
//     free(b);

//     return (i);
// }
