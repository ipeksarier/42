/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:13:22 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 20:51:12 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				counter;
	unsigned char		b;

	str = (const unsigned char *) s;
	b = (unsigned char) c;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == b)
			return ((void *) &str[counter]);
		counter++;
	}
	return (NULL);
}
/* int main ()
{
	 const void  *s = "ABFDEF";
    int c = 70;
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(s, c, n);
    printf("Result: %s/n", sn);
    return (0);
}*/
