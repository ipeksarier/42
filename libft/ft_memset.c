/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:02:27 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 19:50:11 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *) s;
	while (n > 0)
	{
		*(d++) = (unsigned char) c;
		n--;
	}
	return (s);
}

/*int main(void)
{
  char ipek[] = "nasilsin ipek";
  printf("Before memset: %s\n", ipek);

  // Fills the first 5 bytes of ipek with '#'
  memset(ipek, '.', 5);

  printf("After memset: %s\n", ipek);
  return 0;
}*/
