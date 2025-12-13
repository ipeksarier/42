/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:01:41 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 21:07:07 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	num;
	int		len;

	num = n;
	len = count_digits(n);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	if (num == 0)
		s[0] = '0';
	while (num)
	{
		s[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}

/*int main(void)
{
    int number = 12;
    char *str = ft_itoa(number);
    if (str)	
    {
        printf("The string %d is %s\n", number, str);
		free(str); 	
    }
	return 0;
}*/
