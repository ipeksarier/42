/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:34:33 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 20:47:22 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*r;
	char			b;

	b = (char) c;
	r = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == b)
			r = (char *) &s[i];
		i++;
	}
	if (s[i] == b)
		r = (char *) &s[i];
	return (r);
}

/*int main() 
{
   const char str[] = "ipek";
   const char ch = 'k';

   char* ptr = ft_strrchr(str, ch);

   if (ptr) 
   {
       printf("'%c' in \"%s\" is at index %ld\n", ch, str, ptr - str);
   } else {
       printf("'%c' is not present in \"%s\"\n", ch, str);
   }
   return 0;
}*/
