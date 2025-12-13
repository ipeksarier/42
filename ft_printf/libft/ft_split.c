/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isarier <isarier@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:59:06 by isarier           #+#    #+#             */
/*   Updated: 2025/11/10 18:50:35 by isarier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_array(char **array, size_t count)
{
	while (count > 0)
	{
		count--;
		free(array[count]);
	}
	free(array);
	return (0);
}

static int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	a;

	count = 0;
	a = 0;
	while (s[a])
	{
		while (s[a] && s[a] == c)
			a++;
		if (s[a] && s[a] != c)
		{
			count++;
			while (s[a] && s[a] != c)
				a++;
		}
	}
	return (count);
}

static int	fill_split(char **result, char const *s, char c, int count_words)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	b = 0;
	while (s[a] && b < count_words)
	{
		while (s[a] && s[a] == c)
			a++;
		if (s[a] && s[a] != c)
		{
			d = 0;
			while (s [a + d] && s[a + d] != c)
				d++;
			result [b] = malloc(d + 1);
			if (!result[b])
				return (free_array(result, b));
			ft_memcpy(result[b], &s[a], d);
			result[b++][d] = '\0';
			a += d;
		}
	}
	result[b] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wc;

	if (!s)
		return (NULL);
	wc = count_words(s, c);
	result = malloc((wc + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_split (result, s, c, wc))
	{
		return (NULL);
	}
	return (result);
}

/*int main(void)
{
    char str[] = "my name is ipek"; // string to split
    char charset = ' ';              // delimiter
    char **result;
    int i;

    // Call ft_split
    result = ft_split(str, charset);
    if (!result)
    {
        printf("ft_split returned NULL\n");
        return 1;
    }

    // Print the results
    printf("Split successful, printing results:\n");
    i = 0;
    while (result[i])
    {
        printf("OUTPUT[%d]: %s\n", i, result[i]);
        free(result[i]); // free each string
        i++;
    }

    free(result); // free the array itself
    printf("Done.\n");
    return 0;
}*/