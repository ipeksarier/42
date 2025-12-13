/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:09:58 by isarier           #+#    #+#             */
/*   Updated: 2025/11/10 17:45:28 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		a;
	int		b;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
	{
		if (!s1)
			t = ft_strdup(s2);
		else
			t = ft_strdup(s1);
		return (t);
	}
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	t = malloc((a + b + 1) * sizeof(char));
	if (!t)
		return (NULL);
	ft_strlcpy(t, s1, a + 1);
	ft_strlcpy(t + a, s2, b + 1);
	return (t);
}
/*int main()
{
    char *a = "ipek";
    char *b;
    b = ft_strjoin(a, "sarier");
    printf("%s\n", b);
    return(0);
}*/
