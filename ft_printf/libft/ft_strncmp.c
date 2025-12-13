/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:50:13 by isarier           #+#    #+#             */
/*   Updated: 2025/11/10 18:47:31 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		if (str1[i] && str2[i])
			i++;
		else
			break ;
	}
	return (0);
}
/*int main(void) 
{
    const char    s1[] = "ipek";
    const char    s2[] = "ablasi";
    size_t  n;

    n = 2;
    printf("Result: %d", ft_strncmp(s1, s2, n));
    return (0);
}*/