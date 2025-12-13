/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:57:22 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 21:02:44 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	n = malloc(sizeof (char) * (len + 1));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[i];
		i++;
	}
	n[i] = 0;
	return (n);
}
/*int main()
{
    char    source[] = "ciao ipek";
    char*   target = ft_strdup(source);
    printf("%s", target);
    return 0;
}*/
