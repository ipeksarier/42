/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:14:26 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 16:29:03 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_print_unsigned_int(unsigned int a);
int	ft_print_str(char *c);

void    handle_perc(char c, va_list args)
{
    if (c == 'c')
        ft_print_chr(va_arg(args, char));
     else if (c == 's')
        ft_print_str(va_arg(args, char *));
     else if (c == 'd' || c == 'i')
        ft_print_nbr(va_arg(args, int));
    else if (c == 'u')
        ft_print_unsigned_int(va_arg(args, int));
    else if (c == 'x')

   
}

void    ft_printf(char *x, ...) // TODO: this should return how many characters were printed in int
{
    va_list args;
    va_start(args, x); // puts x in args, its like an array
    int count;

    int i = 0;
    count = 0;
    while (x[i])
    {
        if (x[i] == '%')
        {
            if (x[i + 1]) // checks if it exists
            {
                i++;
                count = count + handle_perc(x[i], args);

            }
            else
            {
                // oo you did bad, program ends here...
            }
        }
        else
            write(1, &x[i], 1);
            count++
        i++;
    }   

    va_end(args); // this frees va_list, so that you don't have memory leaks from it.
}

int main(void)
{
    ft_printf("hello, %u ipek%s", 12345, " world");

    return (0);
}