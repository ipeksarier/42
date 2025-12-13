/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:00:16 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 20:52:48 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[a] && a < len)
	{
		while (big[a + b] == little[b] && big[a + b] && a + b < len)
		{
			b++;
			if (little[b] == 0)
				return ((char *) big + a);
		}
		a++;
		b = 0;
	}
	return (0);
}
/*int main() 
 {
    const char *big= "Ipek is in the campus";
    const char *little = "campus";
    size_t len = 10; // Search only within the first 10 characters

    char *result = ft_strnstr(big, little, len);

    if (result) 
    {
        printf("Substring found at index: %ld\n", result - big);
    } 
    else 
    {
        printf("Substring not found.\n");
    }
    return 0;
}*/

/*int main()
{
    const char  *big = "AEFBDEFABCDEF";
    const char  *little = "EFA";
    size_t  len = 8;
    char    *t;

    t = ft_strnstr(big, little, len);
    printf("Resutl: %s\n", t);
    return 0;
}*/
