/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:48:36 by isarier           #+#    #+#             */
/*   Updated: 2025/11/08 20:53:08 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = NULL;
	if (nmemb == 0 || size == 0)
	{
		tmp = malloc(1);
		return (tmp);
	}
	if (size > ((size_t)-1) / nmemb)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
/*int main() 
{
   int *pointer = (int *)ft_calloc(0, 0);
   if (pointer == NULL) 
   {
        printf("Null pointer \n");
   } 
   else 
   {
      printf("Address = %p", (void*)pointer);
   }
   free(pointer);
   return 0;
}*/
