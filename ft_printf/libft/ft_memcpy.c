/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:08:43 by isarier           #+#    #+#             */
/*   Updated: 2025/11/06 00:33:31 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*i;
	unsigned char	*d;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	i = (unsigned char *) dest;
	d = (unsigned char *) src;
	while (n > 0)
	{
		*(i++) = *(d++);
		n--;
	}
	return (dest);
}

/*int main(void) 
{
    char src[] = "ciao ipek";
    char dest[20]; // Ensure enough space
    
    ft_memcpy(dest, src, strlen(src) + 1); // +1 to include null terminator
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return (0);
}*/
