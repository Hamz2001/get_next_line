/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:06:44 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/09 21:06:46 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*sr;

	sr = (char *)s;
	i = 0;
	while (i < n)
	{
		sr[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero (p, (count * size));
	return (p);
}

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	p;

	p = (char)c;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == p)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*all;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = ft_calloc(1, sizeof(char));
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	all = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (all == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		all[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		all[i + j] = s2[j];
		j++;
	}
	free (s1);
	return (all);
}
