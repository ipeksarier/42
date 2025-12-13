/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:39:19 by isarier           #+#    #+#             */
/*   Updated: 2025/11/06 00:22:18 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = (char *) s;
	while (n > 0)
	{
		*(i++) = 0;
		n--;
	}
}

/*int main(void) 
{
  char i[20]  = "my name is ipek";
  printf("Before bzero: %s\n", i);
  bzero(i, sizeof(i)); // Sets all 80 bytes in buffer to zero
  printf ("After bzero: %s", i);
  return 0;
}*/
