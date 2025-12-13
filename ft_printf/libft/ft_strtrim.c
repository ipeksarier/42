/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:00:11 by isarier           #+#    #+#             */
/*   Updated: 2025/11/10 17:51:18 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*cut;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	cut = malloc(end - start + 1);
	if (!cut)
		return (NULL);
	ft_strlcpy(cut, &s1[start], end - start + 1);
	return (cut);
}
/*int main()
{
    char *a = "ola ipek";
    char *set = "ipek";
    char *result = ft_strtrim(a, set);
    if(result)
        printf("%s\n", result);
    return (0);
}*/
