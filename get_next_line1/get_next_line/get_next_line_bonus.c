/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:06:25 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/09 21:06:27 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_line_first(char *line, int fd, int j)
{
	char	*str;

	str = ft_calloc ((size_t)BUFFER_SIZE + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while ((ft_strchr(str, '\n')) == 0)
	{
		j = read(fd, str, BUFFER_SIZE);
		if (j == 0)
			break ;
		if (j < 0)
		{
			free (str);
			free (line);
			return (NULL);
		}
		str[j] = '\0';
		line = ft_strjoin(line, str);
	}
	free (str);
	return (line);
}

char	*ft_check_next(char *line)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0')
	{
		free (line);
		return (NULL);
	}
	p = ft_calloc(ft_strlen(line) - i + 1, sizeof(char));
	i++;
	while (line[i] != '\0')
	{
		p[j] = line[i];
		i++;
		j++;
	}
	free (line);
	return (p);
}

char	*ft_befor_backlash(char *line)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0')
		tmp = ft_calloc(i + 1, sizeof(char));
	if (line[i] == '\n')
		tmp = ft_calloc(i + 2, sizeof(char));
	while (line[j] != '\n' && line[j] != '\0')
	{
		tmp[j] = line[j];
		j++;
	}
	if (line[i] == '\n')
		tmp[j++] = '\n';
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*line[OPEN_MAX];
	char		*s;
	int			j;

	j = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 10240)
		return (NULL);
	line[fd] = ft_line_first(line[fd], fd, j);
	if (line[fd] == NULL)
	{
		free(line[fd]);
		return (NULL);
	}
	s = ft_befor_backlash(line[fd]);
	line[fd] = ft_check_next(line[fd]);
	if (s[0] == '\0')
	{
		free (s);
		return (NULL);
	}
	return (s);
}
