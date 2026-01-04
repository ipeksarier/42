/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:35:06 by isarier           #+#    #+#             */
/*   Updated: 2026/01/02 16:14:39 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     power(int x)
{
        long    y;

        y = 1;
        if (x == 0)
                return(1);
        while (x)
        {
                y = y * 10;
                x--;
        }
        return(y);
}


void	ft_print_nbr(long a)
{
	int 	i;
	long	c;
	char	b;
	long	f;
	
	f = 0;
	i = 0;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	c = a;
	while (c >= 10) // this while loop counts how many digits in c
	{
		c = c / 10;
		i++;
	}
	c = a; // reset c back to original value


	while (c >= 10) // this while loop reverses the int and puts it into f, so 1234 becomes 4321
	{
		f = f + ((c % 10) * power(i)); // this is the math problem we talked about,
					       // and i is the digit number we calculated earlier
					       
					       
		c = c / 10; // divide to get rid of the last value


		i--; // decrease digit number so that it ends at 0, this way the number is reversed
	}
	f = f + ((c % 10) * power(i)); // we need to do it one more time outside of while
				       // for the last digit of the number, 
				       // so 4->3->2 is taken care of inside the while
				       // and 1 is taken care of in this line


	while (f >= 10) // f is the reverse number, so this while loop is printing in reverse
	{
		b = (f % 10) + '0'; // this is your logic, just using f (the reversed number) instead of c
		write(1, &b, 1); 
		f = f / 10; // divide to get rid of the last digit, so 1234 becomes 123 and so on
	}
	// again here the last digit is taken care of 
	b = (f % 10) + '0';
	write(1, &b, 1);
}

int	main(void)
{
	ft_print_nbr(7);
}
