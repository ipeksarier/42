/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:15:56 by isarier           #+#    #+#             */
/*   Updated: 2025/11/06 00:48:44 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			b;

	b = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == b)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == b)
		return ((char *) &s[i]);
	return (NULL);
}
/*int main(void) 
{
  char myStr[] = "Hello World";
  char *s = ft_strchr(myStr, 'W');
  if (s != NULL) 
  {
    printf("%s", s);
  }
  return 0;
 }*/