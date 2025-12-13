/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:08:02 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 21:05:21 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*static char add_index(unsigned int index, char c)
{
     return c + index;
} 

int main(void)
{
     char *result = ft_strmapi("Hello", add_index);
     if (result)
     {
         printf("%s\n", result); // prints "ace"
         free(result);
     }
     return 0;
}*/