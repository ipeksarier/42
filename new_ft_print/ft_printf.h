/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:58:30 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 16:35:31 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>

void	ft_print_chr(char i);
int	    ft_print_str(char *c);
void	ft_print_new(long a);
void	ft_print_unsigned_int(unsigned int a);


#endif