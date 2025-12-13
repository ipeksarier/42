/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:02:53 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 17:45:11 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;
	size_t			d;

	if (!dest || !src)
		return (NULL);
	c_src = (unsigned char *) src;
	c_dest = (unsigned char *) dest;
	d = 0;
	if (c_dest > c_src)
		while (n-- > 0)
			c_dest[n] = c_src[n];
	else
	{
		while (d < n)
		{
			c_dest[d] = c_src[d];
			d++;
		}
	}
	return (dest);
}
/*int main(void)
{
    char    dest_str[] = "ipek";
    const char src_str [] = "inci";
    printf("before memmove function: %s, src = %s\n", dest_str, src_str);
    memmove(dest_str, src_str, 5);
    printf ("after memmove function: %s, src = %s\n", dest_str, src_str);
    return (0);
}*/
